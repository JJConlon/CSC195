#include "Employee.h"
#include <iostream>

const float Employee::TAX = 0.01f;


void Employee::Read() {

    cout << "\nEnter first name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter zipcode: ";
    cin >> zipcode;
    cout << "Enter wage: ";
    cin >> wage;
    cout << "Enter days worked: ";
    cin >> daysWorked;

    int totalHours = 0;

    for (int i = 0; i < daysWorked; i++) {
        int hours;
        cout << "Enter hours worked for day " << i + 1 << ": ";
        cin >> hours;
        totalHours += hours;
    }

    gross = totalHours * wage;
    net = gross - (gross * TAX);

}

void Employee::Write() {
    cout << "\n" << name << " worked for $" << wage << " an hour." << endl;
    cout << "Gross income: $" << gross << endl;
    cout << "Net income: $" << net << endl;

}
