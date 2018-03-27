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

PersonBase * EmployeeFactory::getObj(std::vector<std::string> data){
	PersonBase *p = nullptr;
	if(data[0]!=""&& data[1]!="" && data[2]!="" && data[3]!=""){
		p = new Employee(stoi(data[0]),data[1],stoi(data[2]),stoi(data[3]));
	}
	else{
		p = new Employee(-1,"empty",-1,-1);
	}
	return p;
}
void EmployeeFactory::freeObj(PersonBase *employee){
	delete employee;
	employee = nullptr;
}
void EmployeeFactory::freeObj(std::vector<PersonBase*> employees){
	for(auto employee: employees){
		delete employee;
		employee = nullptr;
	}
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
