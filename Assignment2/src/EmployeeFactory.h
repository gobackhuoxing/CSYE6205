/*
 * EmployeeFactory.h
 *
 *  Created on: 2018Äê2ÔÂ13ÈÕ
 *      Author: XiaoCase
 */

#ifndef EMPLOYEEFACTORY_H_
#define EMPLOYEEFACTORY_H_

#include "AbstractPersonFactory.h"

namespace edu {
namespace neu {
namespace csye6205 {

class EmployeeFactory: public AbstractPersonFactory {
public:
	EmployeeFactory();
	virtual ~EmployeeFactory();

	virtual AbstractPersonAPI * getObject(std::string firstName, std::string lastName, double age, double GPA, double wage);
	virtual void freeObject (AbstractPersonAPI *p);
	virtual void freeObject (std::vector<AbstractPersonAPI *> persons);

	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* EMPLOYEEFACTORY_H_ */
