/*
 * Person.h
 *
 *  Created on: 2018��1��31��
 *      Author: XiaoCase
 */

#ifndef PERSON_H_
#define PERSON_H_

#include "AbstractPersonAPI.h"
#include <string>

namespace edu {
namespace neu {
namespace csye6205{

class Person : public AbstractPersonAPI {
protected:
	std::string firstName;
	std::string lastName;
	double age;
public:
	Person(std::string _firstName, std::string _lastName, double age);
	virtual ~Person();
	virtual void info();
	static void demo();

	double getAge() const {
		return age;
	}

	void setAge(double age) {
		this->age = age;
	}

	const std::string& getFirstName() const {
		return firstName;
	}

	void setFirstName(const std::string& firstName) {
		this->firstName = firstName;
	}

	const std::string& getLastName() const {
		return lastName;
	}

	void setLastName(const std::string& lastName) {
		this->lastName = lastName;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* PERSON_H_ */
