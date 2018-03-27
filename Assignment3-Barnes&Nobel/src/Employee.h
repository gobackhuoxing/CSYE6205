/*
 * Employee.h
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "PersonBase.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Employee : public PersonBase {
private:
	int wage;
public:
	Employee(int _id, std::string _name, int _age, int _wage);
	virtual ~Employee();

	int getWage() const {
		return wage;
	}

	void setWage(int wage) {
		this->wage = wage;
	}

	virtual std::string info() const;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEE_H_ */
