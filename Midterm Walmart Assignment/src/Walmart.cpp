/*
 * Walmart.cpp
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#include "Walmart.h"

namespace edu {
namespace neu {
namespace csye6205 {

Walmart::Walmart(std::string _name) :  Store(_name){
	// TODO Auto-generated constructor stub

}

Walmart::~Walmart() {
	// TODO Auto-generated destructor stub
}


void Walmart::demo() {
    std::cout << "\n\t Walmart::demo() starting ..." << std::endl;
    {
        Walmart obj("Walmart");
        std::cout << "\n Electronic items for sale at Walmart (sorted by price)"
                << std::endl;
        Electronics sharpTv(100, 899.99, "Sharp Flat Screen TV");
        Electronics appleIpad(101, 499.99, "Apple Ipad mini");
        Electronics blueRay(102, 99.99, "BlueRay player");
        Electronics hpLaptop(103, 399.99, "HP Laptop");

        obj.addItem(&sharpTv);
        obj.addItem(&appleIpad);
        obj.addItem(&blueRay);
        obj.addItem(&hpLaptop);

        obj.sortInventory();
        obj.showInventory();
    }

    {
        Walmart obj("Walmart");
        std::cout
                << "\n Bread items for sale at Walmart (sorted by item number)"
                << std::endl;
        Bread pretzel(3, 0.49, "Pretzel");
        Bread bagel(1, 0.89, "Bagel");
        Bread frenchBaguette(2, 2.59, "French Baguette");
        Bread dinnerRoll(4, 1.89, "Dinner Roll");

        obj.addItem(&pretzel);
		obj.addItem(&bagel);
		obj.addItem(&frenchBaguette);
		obj.addItem(&dinnerRoll);

        obj.sortInventory();
        obj.showInventory();
    }

    {
        Walmart obj("Walmart");
        std::cout
                << "\n Healthy Bread items for sale at Walmart (sorted by calories)"
                << std::endl;

        HealthyBread pretzelHealthy(30, 0.49, 230.0, "Pretzel");
        HealthyBread bagelHealthy(10, 0.89, 280.0, "Bagel");
        HealthyBread frenchBaguetteHealthy(20, 2.59, 150.0, "French Baguette");
        HealthyBread dinnerRollHealthy(40, 1.89, 80.0, "Dinner Roll");

        obj.addItem(&pretzelHealthy);
		obj.addItem(&bagelHealthy);
		obj.addItem(&frenchBaguetteHealthy);
		obj.addItem(&dinnerRollHealthy);

        obj.sortInventory();
        obj.showInventory();
    }
    std::cout << "\n Walmart::demo() done!" << std::endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
