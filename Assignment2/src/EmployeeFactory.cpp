/*
 * EmployeeFactory.cpp
 *
 *  Created on: 2018Äê2ÔÂ13ÈÕ
 *      Author: XiaoCase
 */

#include "EmployeeFactory.h"
#include "Employee.h"
#include <iostream>

namespace edu {
namespace neu {
namespace csye6205 {

EmployeeFactory::EmployeeFactory() {
}

EmployeeFactory::~EmployeeFactory() {
}

AbstractPersonAPI * EmployeeFactory::getObject(std::string firstName, std::string lastName, double age, double GPA, double wage){
	AbstractPersonAPI *p = nullptr;
	p = new Employee(firstName,lastName,age,wage);
	return p;
}

void EmployeeFactory::freeObject (AbstractPersonAPI *p){
	delete p;
	p = nullptr;
}

void EmployeeFactory::freeObject (std::vector<AbstractPersonAPI *> persons){
	for(AbstractPersonAPI * p :persons){
		delete p;
		p = nullptr;
	}
}

void EmployeeFactory::demo(){
	std::cout<<std::endl <<"employee factory pattern demo..." <<std::endl;

	EmployeeFactory obj;
	AbstractPersonAPI *e1 = obj.getObject("wenbo", "sun", 26, 4.0, 100000);
	AbstractPersonAPI *e2 = obj.getObject("jianan", "wen", 25, 3.0, 50000);

	std::vector<AbstractPersonAPI *> persons;
	persons.push_back(e1);
	persons.push_back(e2);

	std::cout<<persons.size()<< " employees."<< std::endl;
	for(AbstractPersonAPI *p : persons){
		p->info();
	}

	//I have two freeObject method, one take AbstractPersonAPI pointer, another take vector<AbstractPersonAPI *>
	obj.freeObject(persons);
	//obj.freeObject(e0);
	//obj.freeObject(e1);
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
