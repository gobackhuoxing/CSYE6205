/*
 * StudentFactory.h
 *
 *  Created on: 2018Äê2ÔÂ13ÈÕ
 *      Author: XiaoCase
 */

#ifndef STUDENTFACTORY_H_
#define STUDENTFACTORY_H_

#include "AbstractPersonFactory.h"
#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class StudentFactory : public AbstractPersonFactory {
public:
	StudentFactory();
	virtual ~StudentFactory();

	virtual AbstractPersonAPI * getObject(std::string firstName, std::string lastName, double age, double GPA, double wage);
	virtual void freeObject (AbstractPersonAPI *p);
	virtual void freeObject (std::vector<AbstractPersonAPI *> persons);

	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STUDENTFACTORY_H_ */
