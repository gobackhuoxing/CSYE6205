/*
 * Bread.cpp
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#include "Bread.h"
#include <algorithm>
#include "Item.h"

namespace edu {
namespace neu {
namespace csye6205 {

Bread::Bread(int _itemNumber,double _price,std::string _name) : Item(_itemNumber,_price,_name,"Bread"){
	// TODO Auto-generated constructor stub

}

Bread::~Bread() {
	// TODO Auto-generated destructor stub
}

bool Bread::sort(Item *a, Item *b){
	return a->getItemNumber()>b->getItemNumber();
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
