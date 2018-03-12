//============================================================================
// Name        : DriverProject1.cpp
// Author      : Wenbo Sun
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Walmart.h"

using namespace std;

int main() {
	cout<<"main starting..."<<endl;
	edu::neu::csye6205::Walmart::demo();
	cout<<"main ending..."<<endl;
	return 0;
}
 /*
  * Console out put:
  *
  *main starting...

	 Walmart::demo() starting ...

 Electronic items for sale at Walmart (sorted by price)
4 items in Walmart Inventory
Item: 100, Sharp Flat Screen TV price: 899.990000
Item: 101, Apple Ipad mini price: 499.990000
Item: 103, HP Laptop price: 399.990000
Item: 102, BlueRay player price: 99.990000

 Bread items for sale at Walmart (sorted by item number)
4 items in Walmart Inventory
Item: 4, Dinner Roll price: 1.890000
Item: 3, Pretzel price: 0.490000
Item: 2, French Baguette price: 2.590000
Item: 1, Bagel price: 0.890000

 Healthy Bread items for sale at Walmart (sorted by calories)
4 items in Walmart Inventory
Item: 10, Bagel price: 0.890000 calories: 280.000000
Item: 30, Pretzel price: 0.490000 calories: 230.000000
Item: 20, French Baguette price: 2.590000 calories: 150.000000
Item: 40, Dinner Roll price: 1.890000 calories: 80.000000

 Walmart::demo() done!
main ending...
  *
  *
  */
