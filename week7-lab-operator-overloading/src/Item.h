/*
 * Item.h
 *
 *  Created on: 2018Äê2ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <string>
#include <ostream>
#include <algorithm>
#include <vector>

namespace neu {
namespace edu {
namespace csye6205 {

class Item {
private:
	int ID;
	std::string name;
	int price;
public:
	Item(int _ID,std::string _name, int _price);
	virtual ~Item();
	static void demo();

	void show();
	Item opPlusTen(const Item& i);

	int getId() const {
		return ID;
	}

	const std::string& getName() const {
		return name;
	}

	int getPrice() const {
		return price;
	}

	friend std::ostream &operator<<(std::ostream& output, const Item& i);
	friend Item &operator+(Item& i,const int n);

	void setId(int id) {
		ID = id;
	}

	void setName(const std::string& name) {
		this->name = name;
	}
	void setPrice(int price);

	template<typename T>
	T max(T a){
		if(a.price>this->price) return a;
		else return *this;
	}

};

} /* namespace csye6205 */
} /* namespace edu */
} /* namespace neu */

#endif /* ITEM_H_ */
