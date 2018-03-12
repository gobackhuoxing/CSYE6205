/*
 * Item.h
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class Item {
protected:
	int itemNumber;
	std::string name;
	double price;
	std::string type;
public:
	Item(int _itemNumber,double _price,std::string _name, std::string _type);
	virtual ~Item();

	virtual float getCalories() {
				return 0;
	}

	std::string info();

	int getItemNumber() const {
		return itemNumber;
	}

	void setItemNumber(int itemNumber) {
		this->itemNumber = itemNumber;
	}

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string& name) {
		this->name = name;
	}

	double getPrice() const {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
	}

	const std::string& getType() const {
		return type;
	}

	void setType(const std::string& type) {
		this->type = type;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ITEM_H_ */
