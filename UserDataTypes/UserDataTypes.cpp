// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Sandwich.h""
#include <iostream>
#define XBOX
using namespace std;

#define SHOP_NAME "Subway"

using currency = double;
typedef unsigned char byte;

//struct Sandwich {
//
//    void Display() {
//        cout << "Price: " << price << endl;
//
//    }
//
//public:
//    char name[32];
//    float price;
//    bool isHot;
//};


int main()
{
    Sandwich sandwich;
    sandwich.Read();
    sandwich.Write();

    f1();
    cout << SHOP_NAME << endl;

#ifdef XBOX
    cout << "xbox\n";

#endif

#ifdef _DEBUG
    cout << "debug\n";

#endif



    /*Sandwich sandwich;
    sandwich.price = 4.99f;
    sandwich.isHot = true;
    sandwich.Display();

    cout << sandwich.isHot << endl;*/

    std::cout << "Hello World!\n";
    int i = 5;
    char c = 23;

    i = c;

    float f = 23.4;
    double d = 34.5;

    f = static_cast<float>(d);

    cout << sizeof(int);
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
