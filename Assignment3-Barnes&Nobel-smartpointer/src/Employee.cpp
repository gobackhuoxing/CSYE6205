/*
 * Employee.cpp
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#include "Employee.h"

namespace edu {
namespace neu {
namespace csye6205 {

Employee::Employee(int _id, std::string _name, int _age, int _wage): PersonBase(_id,_name,_age), wage(_wage) {
	// TODO Auto-generated constructor stub

}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

std::string Employee::info() const {
	return "ID:" + std::to_string(this->getId())
	+" Name:" + this->getName()
	+" Age:" +  std::to_string(this->getAge())
	+" Wage:" + std::to_string(this->getWage());
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
