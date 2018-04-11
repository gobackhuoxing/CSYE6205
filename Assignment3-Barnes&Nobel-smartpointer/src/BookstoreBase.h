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

typedef std::unique_ptr<PersonBase> UniquePtrPerson_t;
typedef std::unique_ptr<BookBase> UniquePtrBook_t;

class BookstoreBase : public AbstractBookstoreAPI {
protected:
	std::string name;
	std::vector<UniquePtrBook_t> booklist;
	std::vector<UniquePtrPerson_t> employeelist;
public:
	BookstoreBase(std::string _name);
	virtual ~BookstoreBase();
	virtual void addBook(std::string path);
	virtual void addEmployee(std::string path);
	virtual void showEmployees();
	virtual void showBooks();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BOOKSTOREBASE_H_ */
