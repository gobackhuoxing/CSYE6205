/*
 * PersonBase.cpp
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#include "PersonBase.h"

namespace edu {
namespace neu {
namespace csye6205 {

PersonBase::PersonBase(int _id, std::string _name, int _age): id(_id), name(_name), age(_age) {
	// TODO Auto-generated constructor stub

}

PersonBase::~PersonBase() {
	// TODO Auto-generated destructor stub
}

std::string PersonBase::info() const {
	return "ID:" + std::to_string(this->getId())
	+" Name:" + this->getName()
	+" Age:" +  std::to_string(this->getAge());
}

std::ostream& operator << (std::ostream& output, const PersonBase& p){
	std::string str = p.info();
	output << str;
	return output;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
