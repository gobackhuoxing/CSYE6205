/*
 * AbstractPersonAPI.h
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#ifndef ABSTRACTPERSONAPI_H_
#define ABSTRACTPERSONAPI_H_

#include "string"

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractPersonAPI {
public:
	AbstractPersonAPI();
	virtual ~AbstractPersonAPI();
	virtual std::string info() const = 0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTPERSONAPI_H_ */
