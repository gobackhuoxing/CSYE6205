/*
 * Item.cpp
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#include "Item.h"

namespace edu {
namespace neu {
namespace csye6205 {

Item::Item(int _itemNumber,double _price,std::string _name, std::string _type): itemNumber(_itemNumber), name(_name), price(_price), type(_type) {
	// TODO Auto-generated constructor stub

}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

std::string Item::info() {
	std::string str = "Item: " + std::to_string(this->getItemNumber())
				+ ", " + this->getName()
				+ " price: " + std::to_string(this->getPrice());
	if(this->getCalories()!=0){
		str= str+" calories: " + std::to_string(this->getCalories());
	}
	return str;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
