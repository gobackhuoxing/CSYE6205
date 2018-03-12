/*
 * Store.cpp
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#include "Store.h"
#include <iostream>
#include <algorithm>
#include "Electronics.h"
#include "Bread.h"
#include "HealthyBread.h"

namespace edu {
namespace neu {
namespace csye6205 {

Store::Store(std::string _name): name(_name) {
		// TODO Auto-generated constructor stub

	}

Store::~Store() {
	// TODO Auto-generated destructor stub
}

void Store::addItem(Item *item){
	inventory.push_back(item);
}

void Store::sortInventory(){
	if(inventory.front()->getType()=="Bread"){
		std::sort(inventory.begin(), inventory.end(), Bread::sort);
	}
	else if(inventory.front()->getType()=="Electronics"){
		std::sort(inventory.begin(), inventory.end(), Electronics::sort);
	}
	else if(inventory.front()->getType()=="HealthyBread"){
		std::sort(inventory.begin(), inventory.end(), HealthyBread::sort);
	}
}

void Store::showInventory() {
	std::cout << this->inventory.size() << " items in " << this->getName() << " Inventory" << std::endl;
	for (Item *itemPtr : this->inventory) {
		std::cout << itemPtr->info() << std::endl;
	}
}

std::ostream & operator<< (std::ostream & output, const Item& i){
	std::string str = "Item: " + std::to_string(i.getItemNumber())
			+ ", " + i.getName()
			+ " price: " + std::to_string(i.getPrice());

//	if(i.getCalories()!=0){
//			str= str+" calories: " + std::to_string(i.getCalories());
//		}

	output << str;
	return output;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
