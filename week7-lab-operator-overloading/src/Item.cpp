/*
 * Item.cpp
 *
 *  Created on: 2018Äê2ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#include "Item.h"
#include <iostream>
#include  <vector>

namespace neu {
namespace edu {
namespace csye6205 {

Item::Item(int _ID,std::string _name, int _price): ID(_ID), name(_name), price(_price) {
}

Item::~Item() {
}

Item Item::opPlusTen(const Item& i){
	return Item(i.ID,i.name,(i.price+100));
}

void Item::show(){
	std::cout<<this->ID<<", "<<this->name<<", "<<this->price<<std::endl;
	//std::cout << this << std::endl;
}

void Item::setPrice(int price) {
	this->price = price;
}

std::ostream & operator<<(std::ostream & output, const Item& i){

	std::string str = "Item: " + std::to_string(i.getId())
			+ ", " + i.getName()
			+ " price: " + std::to_string(i.getPrice());

	output << str;
	return output;
}

//Item &operator +(Item& i,const int n){
//	i.setPrice(i.price+n);
//	return i;
//}

void Item::demo(){
	std::cout<<"Item demo:"<<std::endl;
	Item a(1,"a",10);
	Item b(2,"b",20);
	Item c(3,"c",30);
	std::cout << a << std::endl;
	Item item[]={a,b,c};
	std::vector<Item> items(item,item+3);
//	std::vector<Item *> items;
//	items.push_back(&a);
//	items.push_back(&b);
//	items.push_back(&c);
	std::cout<<"Before add 10"<< std::endl;
	for(auto item: items){
		item.show();
	}


	//std::cout<<a.max(b)<< std::endl;
	std::transform(item, item+3, item, opPlusTen);

	for(auto it: item){
			it.show();
		}

	std::transform(items.begin(), items.end(), items.begin(), opPlusTen);

		for(auto it: item){
				it.show();
			}
}

} /* namespace csye6205 */
} /* namespace edu */
} /* namespace neu */
