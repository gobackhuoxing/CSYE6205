/*
 * BarnesAndNobel.h
 *
 *  Created on: 2018Äê3ÔÂ27ÈÕ
 *      Author: XiaoCase
 */

#ifndef BARNESANDNOBEL_H_
#define BARNESANDNOBEL_H_

#include "BookstoreBase.h"

namespace edu {
namespace neu {
namespace csye6205 {

class BarnesAndNobel: public BookstoreBase {
public:
	BarnesAndNobel(std::string _name);
	virtual ~BarnesAndNobel();

	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BARNESANDNOBEL_H_ */
