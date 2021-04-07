#include "Employee.h"
#include <iostream>
using namespace std;

int main()
{
    Employee employees[5];

    unsigned short numEmployees; 
    cout << "Number of employees: "; 
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) 
    {
        employees[i].Read();
    }

    for (int i = 0; i < numEmployees; i++)
    {
        employees[i].Write();
    }
}


