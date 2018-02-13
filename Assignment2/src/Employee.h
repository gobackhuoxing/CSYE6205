/*
 * Employee.h
 *
 *  Created on: 2018Äê1ÔÂ24ÈÕ
 *      Author: XiaoCase
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Person.h"
#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class Employee : public Person{
private:
	double wage;
	using Person::firstName;
	using Person::lastName;
	using Person::age;
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
