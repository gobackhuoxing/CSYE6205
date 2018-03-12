/*
 * AbstractStore.h
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#ifndef ABSTRACTSTORE_H_
#define ABSTRACTSTORE_H_


#include "Item.h"

namespace edu {
namespace neu {
namespace csye6205 {



class AbstractStore {
public:
	AbstractStore();
	virtual ~AbstractStore();
	virtual void addItem(Item *item) = 0;
	virtual void sortInventory() = 0;
	virtual void showInventory() = 0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTSTORE_H_ */
