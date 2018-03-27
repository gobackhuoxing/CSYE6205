/*
 * Book.cpp
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#include "BookBase.h"

namespace edu {
namespace neu {
namespace csye6205 {

BookBase::BookBase(int _id, std::string _name, std::string _author, double _price): id(_id), name(_name), author(_author), price(_price) {
	// TODO Auto-generated constructor stub

}

BookBase::~BookBase() {
	// TODO Auto-generated destructor stub
}

std::string BookBase::info() const {
	return "ID:" + std::to_string(this->getId())
	+" Name:" + this->getName()
	+" Author:" + this->getAuthor()
	+" price:" +  std::to_string(this->getPrice());
}

std::ostream& operator << (std::ostream& output, const BookBase& p){
	std::string str = p.info();
	output << str;
	return output;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
