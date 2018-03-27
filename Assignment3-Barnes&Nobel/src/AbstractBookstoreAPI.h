/*
 * AbstractBookstore.h
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#ifndef ABSTRACTBOOKSTOREAPI_H_
#define ABSTRACTBOOKSTOREAPI_H_

#include <iostream>

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractBookstoreAPI {
public:
	AbstractBookstoreAPI();
	virtual ~AbstractBookstoreAPI();

	virtual void addBook(std::string path) = 0;
	virtual void addEmployee(std::string path) = 0;
	virtual void showEmployees() = 0;
	virtual void showBooks() = 0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTBOOKSTOREAPI_H_ */
