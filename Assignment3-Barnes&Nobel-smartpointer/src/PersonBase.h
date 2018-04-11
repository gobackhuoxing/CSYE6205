/*
 * PersonBase.h
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#ifndef PERSONBASE_H_
#define PERSONBASE_H_

#include "AbstractPersonAPI.h"
#include <string>
#include <ostream>
#include <memory>

namespace edu {
namespace neu {
namespace csye6205 {

class PersonBase : AbstractPersonAPI{
protected:
	int id;
	std::string name;
	int age;

public:
	PersonBase(int _id, std::string _name, int _age);
	virtual ~PersonBase();

	int getAge() const {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	int getId() const {
		return id;
	}

	void setId(int id) {
		this->id = id;
	}

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string& name) {
		this->name = name;
	}

	virtual std::string info() const;

	friend std::ostream& operator << (std::ostream& output, const PersonBase& p);

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* PERSONBASE_H_ */
