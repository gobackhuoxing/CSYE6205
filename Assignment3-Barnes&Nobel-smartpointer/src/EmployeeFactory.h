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

typedef std::unique_ptr<PersonBase> UniquePtrPerson_t;

class EmployeeFactory {
public:

	EmployeeFactory();
	virtual ~EmployeeFactory();
	UniquePtrPerson_t getObj(std::vector<std::string> data);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEEFACTORY_H_ */
