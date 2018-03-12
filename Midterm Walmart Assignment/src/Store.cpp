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
	std::sort(inventory.begin(), inventory.end(), Item::sort);
}

void Store::showInventory() {
	std::cout << this->inventory.size() << " items in " << this->getName() << " Inventory" << std::endl;
	for (Item *itemPtr : this->inventory) {
		std::cout << *itemPtr << std::endl;
	}
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
