#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

int Square(int& i) {
	i = i * i;
	return i;
}

int Double(int* p) {
	*p = *p * 2;
	return *p;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	// declare a int reference and set it to the int variable above
	int var = 10;
	int& ref = var;

	// output the int variable
	cout << "Original Reference: " << ref;

	// set the int reference to some number
	// output the int variable
	// what happened to the int variable when the reference was changed? (insert answer)
	ref = 7;
	cout << "\nChanged Reference: " << var;
	//The original variable was changed to 7 as well

	// output the address of the int variable
	// output the address of the int reference
	// are the addresses the same or different? (insert answer)
	cout << "\nAddress of var: " << &var;
	cout << "\nAddress of ref: " << &ref;
	//They're the same

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	var = Square(var);

	// output the int variable to the console
	cout << "\nSquare of var: " << var;


	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	// set the int pointer to the address of the int variable created in the REFERENCE section
	int* p = nullptr;
	p = &var;

	// output the value of the pointer
	// what is this address that the pointer is pointing to? (insert answer)
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << "\nPointer of var: " << p;
	//The int and reference addresses
	cout << "\nPointer of var value: " << *p;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	int i = Double(p);

	// output the dereference pointer
	// output the int variable created in the REFERENCE section
	// did the int variable's value change when using the pointer?
	cout << "\nPointer after double: " << i;
	cout << "\nOutput of var: " << var;
	//It did change, it was doubled like pointer

	// ** ALLOCATION/DEALLOCATION **
	//
	// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	// output the pointer value, this should be the address of the int allocated on the heap
	// output the dereference pointer
	// deallocate the int pointer to free up the memory
	int* uh = new int;
	*uh = 5;
	cout << "\nNew pointer: " << uh;
	cout << "\nNew pointer dereferenced: " << *uh;
	delete uh;
	uh = NULL;

	// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4-6
	// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	// use a for loop and output each of the ints in the array
	// use a for loop and output the address of each of the ints in the array
	// deallocate the int pointer to free up the memory block (remember it's an array)
	int* ints = new int[5];
	for (int i = 0; i < 5; i++) {
		ints[i] = rand() % 10;
	}
	cout << "\nInt array values:";
	for (int i = 0; i < 5; i++) {
		cout << " " << ints[i];
	}
	cout << "\nInt array addresses:";
	for (int i = 0; i < 5; i++) {
		cout << "\n" << &ints[i];
	}
	delete[] ints;
	ints = NULL;

	// ** STRUCTURE **
	//
	// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
	// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
	// use a for loop and output the name and id of each person in the array 
	// deallocate the person pointer to free up the memory block (remember it's an array)
	Person* people = new Person[2];
	Person p1;
	Person p2;
	cout << "\nEnter a name: ";
	cin >> p1.name;
	cout << "Enter an id: ";
	cin >> p1.id;
	cout << "Enter a name: ";
	cin >> p2.name;
	cout << "Enter an id: ";
	cin >> p2.id;
	people[0] = p1;
	people[1] = p2;
	for (int i = 0; i < 2; i++) {
		cout << "\nName: " << people[i].name << " ID: " << people[i].id;
	}
	delete[] people;
	people = NULL;
}