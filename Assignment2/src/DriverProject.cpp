//============================================================================
// Name        : DriverProject.cpp
// Author      : wenbo sun
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "AbstractPersonAPI.h"

using namespace std;
using namespace edu::neu::csye6205;

int main() {
	cout << "Main Starting...." << endl;

//	//constructor calling demo
//	Student::demo();
//	Employee::demo();
//
//	//simple factory pattern demo
//	SimplePersonFactory::demo();
//
//	//GoF Factory pattern demo;
//	StudentFactory::demo();
//	EmployeeFactory::demo();

	AbstractPersonAPI::show();

	cout << endl << "Main End...." << endl;
	return 0;
}

/*
 *  console output:

Main Starting....

constructor calling demo...
2 persons.
This is a employee, name: jianan wen age: 25 wage: 50000
This is a student, name: wenbo sun age: 26 GPA: 4

simple factory pattern demo...
2 persons
This is a employee, name: zixuan xu age: 23 wage: 75000
This is a student, name: jianan wen age: 25 GPA: 3.3

factory pattern demo...
2 persons.
This is a student, name: zixuan xu age: 24 GPA: 3.2
This is a employee, name: wenbo sun age: 26 wage: 100000

Main End....

 */
