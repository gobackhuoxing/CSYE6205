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


bool Item::sort(Item *a, Item *b){
	return a->by()<b->by();
}

double Item::by(){
		return this->getPrice();
	}

std::ostream & operator<< (std::ostream & output, const Item& i){
	std::string str = "Item: " + std::to_string(i.getItemNumber())
			+ ", " + i.getName()
			+ " price: " + std::to_string(i.getPrice());

	if(i.get()!=0){
			str= str+" calories: " + std::to_string(i.get());
		}

	output << str;
	return output;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
