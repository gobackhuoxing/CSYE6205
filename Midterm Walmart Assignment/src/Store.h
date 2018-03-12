/*
 * Store.h
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#ifndef STORE_H_
#define STORE_H_

#include "AbstractStore.h"
#include <vector>
#include "Item.h"
#include <string>
#include <algorithm>
#include "Electronics.h"
#include "Bread.h"
#include "HealthyBread.h"

namespace edu {
namespace neu {
namespace csye6205 {


class Store {
protected:
	std::vector<Item *> inventory;
	std::string name;
public:
	Store(std::string _name);
	virtual ~Store();

	void addItem(Item *item);

	void sortInventory();

	void showInventory();

	const std::string& getName() const {
		return name;
	}

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STORE_H_ */
