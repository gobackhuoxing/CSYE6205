/*
 * Person.h
 *
 *  Created on: 2018Äê1ÔÂ31ÈÕ
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
private:
	using AbstractPersonAPI::age;
	using AbstractPersonAPI::firstName;
	using AbstractPersonAPI::lastName;
public:
	Person(std::string _firstName, std::string _lastName, double age);
	virtual ~Person();
	virtual void info();
	static void demo();

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* PERSON_H_ */
