/*
 * SimplePersonFactory.h
 *
 *  Created on: 2018Äê2ÔÂ7ÈÕ
 *      Author: XiaoCase
 */

#ifndef SIMPLEPERSONFACTORY_H_
#define SIMPLEPERSONFACTORY_H_

#include "AbstractPersonAPI.h"
#include <vector>
namespace edu {
namespace neu {
namespace csye6205 {

class SimplePersonFactory {
public:
	SimplePersonFactory();
	virtual ~SimplePersonFactory();

	virtual AbstractPersonAPI *getObject(int criteria, std::string firstName, std::string lastName, double age, double GPA, double wage);
	virtual void freeObject(AbstractPersonAPI *p);
	virtual void freeObject(std::vector<AbstractPersonAPI *>);
	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* SIMPLEPERSONFACTORY_H_ */
