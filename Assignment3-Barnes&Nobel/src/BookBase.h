/*
 * Book.h
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#ifndef BOOKBASE_H_
#define BOOKBASE_H_

#include "AbstractBookAPI.h"
#include <iostream>

namespace edu {
namespace neu {
namespace csye6205 {

class BookBase : public AbstractBookAPI {
protected:
	int id;
	std::string name;
	std::string author;
	double price;
public:
	BookBase(int _id, std::string _name, std::string _author, double _price);
	virtual ~BookBase();

	const std::string& getAuthor() const {
		return author;
	}

	void setAuthor(const std::string& author) {
		this->author = author;
	}

	int getId() const {
		return id;
	}

	void setId(int id) {
		this->id = id;
	}

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string& name) {
		this->name = name;
	}

	double getPrice() const {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
	}

	virtual std::string info() const;

	friend std::ostream& operator << (std::ostream& output, const BookBase& p);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BOOKBASE_H_ */
