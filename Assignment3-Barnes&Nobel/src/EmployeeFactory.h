/*
 * EmployeeFactory.h
 *
 *  Created on: 2018Äê3ÔÂ27ÈÕ
 *      Author: XiaoCase
 */

#ifndef EMPLOYEEFACTORY_H_
#define EMPLOYEEFACTORY_H_

#include "PersonBase.h"
#include <vector>
#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class EmployeeFactory {
public:
	EmployeeFactory();
	virtual ~EmployeeFactory();
	PersonBase* getObj(std::vector<std::string> data);
	void freeObj(PersonBase *employee);
	void freeObj(std::vector<PersonBase*> employees);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEEFACTORY_H_ */
