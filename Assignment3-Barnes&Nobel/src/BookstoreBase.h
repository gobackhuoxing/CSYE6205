/*
 * BookstoreBase.h
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#ifndef BOOKSTOREBASE_H_
#define BOOKSTOREBASE_H_

#include <iostream>
#include <vector>
#include "AbstractBookstoreAPI.h"
#include "BookBase.h"
#include "PersonBase.h"

namespace edu {
namespace neu {
namespace csye6205 {

class BookstoreBase : public AbstractBookstoreAPI {
protected:
	std::string name;
	std::vector<BookBase *> booklist;
	std::vector<PersonBase *> employeelist;
public:
	BookstoreBase(std::string _name);
	virtual ~BookstoreBase();
	virtual void addBook(std::string path);
	virtual void addEmployee(std::string path);
	virtual void showEmployees();
	virtual void showBooks();
	virtual void clean();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BOOKSTOREBASE_H_ */
