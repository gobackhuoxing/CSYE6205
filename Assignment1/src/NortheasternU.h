/*
 * NortheasternU.h
 *
 *  Created on: 2018Äê1ÔÂ31ÈÕ
 *      Author: XiaoCase
 */

#ifndef NORTHEASTERNU_H_
#define NORTHEASTERNU_H_

#include "UniversityBase.h"
#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class NortheasternU : public UniversityBase{
public:
	NortheasternU();
	NortheasternU(int _id, std::string _name);
	virtual ~NortheasternU();
	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* NORTHEASTERNU_H_ */
