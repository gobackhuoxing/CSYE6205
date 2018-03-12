/*
 * Bread.h
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#ifndef BREAD_H_
#define BREAD_H_

#include "Item.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Bread : public Item {
public:
	Bread(int _itemNumber,double _price,std::string _name);
	virtual ~Bread();

	static bool sort(Item *a, Item *b);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BREAD_H_ */
