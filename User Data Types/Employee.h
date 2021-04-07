#pragma once
using namespace std;

class Employee {

	char name[32];	
	int age;    
	int zipcode;    
	float wage;    
	int daysWorked;    
	int hoursWorkedPerDay[7];
	float gross;
	float net;

	static const float TAX;

public:
	void Read();
	void Write();
};