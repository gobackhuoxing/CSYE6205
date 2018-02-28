//============================================================================
// Name        : DriverProject1.cpp
// Author      : Xiaocase
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Item.h"
#include "Chart.h"

using namespace std;
using namespace neu::edu::csye6205;

int main() {
	cout << "main starting..." << endl; // prints main starting...
//	neu::edu::csye6205::Item::demo();
//	Chart<Item> obj;
//	Item a(1,"a",10);
//	Item b(2,"b",20);
//	Item c(3,"c",30);
//	obj.add(a);
//	obj.add(b);
//	obj.add(c);
//	obj.show();
	Chart<Item>::demo();
	cout << "main ending..." << endl; // prints main starting...
	return 0;
}
