#include <iostream>
using namespace std;

void set(int& i) {
	i = 100;
}

void swap(int i1, int i2) {

}

int main() {
	int i1 = 2345;
	int i2 = 20;

	int& r = i1;
	int* p = nullptr;
	p = &i1;
	p = &i2;

	char* pc = (char*)&i1;
	cout << *pc << endl;

	r = 30;
	set(i1);
	cout << i1 << endl;
	cout << r << endl;

	cout << p << endl;
	cout << *p << endl;
}