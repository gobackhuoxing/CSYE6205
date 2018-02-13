/*
 * AbstractPersonAPI.h
 *
 *  Created on: 2018Äê1ÔÂ24ÈÕ
 *      Author: XiaoCase
 */

#ifndef ABSTRACTPERSONAPI_H_
#define ABSTRACTPERSONAPI_H_

#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractPersonAPI {
protected:
	std::string firstName;
	std::string lastName;
	double age;

public:
	AbstractPersonAPI();
	AbstractPersonAPI(std::string _firstName, std::string _lastName, double _age);
	virtual ~AbstractPersonAPI();
	virtual void info();

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

}
}
}

#endif /* ABSTRACTPERSONAPI_H_ */
