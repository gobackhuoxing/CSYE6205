/*
 * Walmart.h
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#ifndef WALMART_H_
#define WALMART_H_

#include <iostream>
#include "Store.h"
#include "Electronics.h"
#include "Bread.h"
#include "HealthyBread.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Walmart : public Store {
protected:
	std::string name;
public:
	Walmart(std::string _name);
	virtual ~Walmart();

	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* WALMART_H_ */
