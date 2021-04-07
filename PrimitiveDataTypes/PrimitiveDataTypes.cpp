// PrimitiveDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
     string firstName = "";
     char lastInitial;
     int age;
     int zipcode;
     float wage;
     int daysWorked;
     int totalHours = 0;

     cout << "Enter first name: ";
     cin >> firstName;
     cout << "Enter last initial: ";
     cin >> lastInitial;
     cout << "Enter age: ";
     cin >> age;
     cout << "Enter zipcode: ";
     cin >> zipcode;
     cout << "Enter wage: ";
     cin >> wage;
     cout << "Enter days worked: ";
     cin >> daysWorked;

     for (int i = 0; i < daysWorked; i++) {
         int hours;
         cout << "Enter hours worked for day " << i+1 << ": ";
         cin >> hours;
         totalHours += hours;
     }

     cout << firstName << " worked " << totalHours << " hours at $" << wage << " an hour." << endl;
     float gross = totalHours * wage;
     float net = gross * .90;
     cout << "Gross income: $" << gross << endl;
     cout << "Net income: $" << net << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
