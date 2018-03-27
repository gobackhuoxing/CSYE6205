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

namespace edu {
namespace neu {
namespace csye6205 {

class BookFactory {
public:
	BookFactory();
	virtual ~BookFactory();

	BookBase* getObj(std::vector<std::string> data);
	void freeObj(BookBase *book);
	void freeObj(std::vector<BookBase*> books);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BOOKFACTORY_H_ */
