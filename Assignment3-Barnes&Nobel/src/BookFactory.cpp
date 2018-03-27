/*
 * BookFactory.cpp
 *
 *  Created on: 2018Äê3ÔÂ27ÈÕ
 *      Author: XiaoCase
 */

#include "BookFactory.h"

#include "BookBase.h"

namespace edu {
namespace neu {
namespace csye6205 {

BookFactory::BookFactory() {
	// TODO Auto-generated constructor stub

}

BookFactory::~BookFactory() {
	// TODO Auto-generated destructor stub
}

BookBase * BookFactory::getObj(std::vector<std::string> data){
	BookBase *p = nullptr;
	if(data[0]!=""&& data[1]!="" && data[2]!="" && data[3]!=""){
		p = new BookBase(stoi(data[0]),data[1],data[2],stod(data[3]));
	}
	else{
		p = new BookBase(-1,"empty","empty",-1);
	}
	return p;
}
void BookFactory::freeObj(BookBase *book){
	delete book;
	book = nullptr;
}
void BookFactory::freeObj(std::vector<BookBase*> books){
	for(auto book: books){
		delete book;
		book = nullptr;
	}
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
