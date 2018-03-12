/*
 * HealthyBread.cpp
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#include "HealthyBread.h"
#include <algorithm>

namespace edu {
namespace neu {
namespace csye6205 {

HealthyBread::HealthyBread(int _itemNumber,double _price,float _calories,std::string _name) :Item(_itemNumber,_price,_name,"HealthyBread"), calories(_calories) {
	// TODO Auto-generated constructor stub

}

HealthyBread::~HealthyBread() {
	// TODO Auto-generated destructor stub
}

bool HealthyBread::sort(Item *a, Item *b){
	return a->getCalories()>b->getCalories();
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
