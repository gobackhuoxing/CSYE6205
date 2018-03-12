/*
 * Electronics.h
 *
 *  Created on: 2018��2��28��
 *      Author: XiaoCase
 */

#ifndef ELECTRONICS_H_
#define ELECTRONICS_H_

#include "Item.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Electronics : public Item {
public:
	Electronics(int _itemNumber,double _price,std::string _name);
	virtual ~Electronics();

	void sortInventory();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ELECTRONICS_H_ */
