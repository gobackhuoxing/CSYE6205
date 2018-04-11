/*
 * EmployeeFactory.cpp
 *
 *  Created on: 2018Äê3ÔÂ27ÈÕ
 *      Author: XiaoCase
 */

#include "EmployeeFactory.h"
#include "Employee.h"

namespace edu {
namespace neu {
namespace csye6205 {

EmployeeFactory::EmployeeFactory() {
	// TODO Auto-generated constructor stub

}

EmployeeFactory::~EmployeeFactory() {
	// TODO Auto-generated destructor stub
}

UniquePtrPerson_t EmployeeFactory::getObj(std::vector<std::string> data){
	if(data[0]!=""&& data[1]!="" && data[2]!="" && data[3]!=""){
		return std::unique_ptr<PersonBase> (new Employee(stoi(data[0]),data[1],stoi(data[2]),stoi(data[3])));
	}
	else{
		return std::unique_ptr<PersonBase> (new Employee(-1,"empty",-1,-1));
	}
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
