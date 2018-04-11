/*
 * AbstractBookAPI.h
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#ifndef ABSTRACTBOOKAPI_H_
#define ABSTRACTBOOKAPI_H_

#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractBookAPI {
public:
	AbstractBookAPI();
	virtual ~AbstractBookAPI();
	virtual std::string info() const=0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTBOOKAPI_H_ */
