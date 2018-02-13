/*
 * Employee.h
 *
 *  Created on: 2018��1��24��
 *      Author: XiaoCase
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "AbstractPersonAPI.h"
#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class Employee : public AbstractPersonAPI{
private:
	double wage;
	using AbstractPersonAPI::firstName;
	using AbstractPersonAPI::lastName;
	using AbstractPersonAPI::age;
public:
	Employee();
	Employee(std::string _firstName, std::string _lastName, double _age, double _wage);
	virtual ~Employee();
	virtual void info();
	static void demo();

	double getWage() const {
		return wage;
	}

	void setWage(double wage) {
		this->wage = wage;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEE_H_ */
