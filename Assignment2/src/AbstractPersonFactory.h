/*
 * AbstractPersonFactory.h
 *
 *  Created on: 2018Äê2ÔÂ13ÈÕ
 *      Author: XiaoCase
 */

#ifndef ABSTRACTPERSONFACTORY_H_
#define ABSTRACTPERSONFACTORY_H_

#include "AbstractPersonAPI.h"
#include <vector>

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractPersonFactory {
public:
	AbstractPersonFactory();
	virtual ~AbstractPersonFactory();

	virtual AbstractPersonAPI * getObject(std::string firstName, std::string lastName, double age, double GPA, double wage) = 0;
	virtual void freeObject (AbstractPersonAPI *p) = 0;
	virtual void freeObject (std::vector<AbstractPersonAPI *> persons) = 0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTPERSONFACTORY_H_ */
