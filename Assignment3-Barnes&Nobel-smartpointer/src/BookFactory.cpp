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

UniquePtrBook_t BookFactory::getObj(std::vector<std::string> data){
	if(data[0]!=""&& data[1]!="" && data[2]!="" && data[3]!=""){
		return std::unique_ptr<BookBase>(new BookBase(stoi(data[0]),data[1],data[2],stod(data[3])));
	}
	else{
		return std::unique_ptr<BookBase>(new BookBase(-1,"empty","empty",-1));
	}
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
