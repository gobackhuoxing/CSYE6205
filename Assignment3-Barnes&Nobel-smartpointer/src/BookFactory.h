/*
 * BookFactory.h
 *
 *  Created on: 2018Äê3ÔÂ27ÈÕ
 *      Author: XiaoCase
 */

#ifndef BOOKFACTORY_H_
#define BOOKFACTORY_H_

#include "BookBase.h"
#include <vector>
#include <string>
#include <memory>

namespace edu {
namespace neu {
namespace csye6205 {

typedef std::unique_ptr<BookBase> UniquePtrBook_t;

class BookFactory {
public:
	BookFactory();
	virtual ~BookFactory();

	UniquePtrBook_t getObj(std::vector<std::string> data);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BOOKFACTORY_H_ */
