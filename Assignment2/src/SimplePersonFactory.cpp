/*
 * SimplePersonFactory.cpp
 *
 *  Created on: 2018Äê2ÔÂ7ÈÕ
 *      Author: XiaoCase
 */

#include <string>
#include <iostream>
#include <vector>
#include "SimplePersonFactory.h"
#include "Person.h"
#include "Employee.h"
#include "Student.h"


namespace edu {
namespace neu {
namespace csye6205 {

SimplePersonFactory::SimplePersonFactory() {}

SimplePersonFactory::~SimplePersonFactory() {}

void SimplePersonFactory::freeObject(AbstractPersonAPI *p){
	delete p;
	p = nullptr;
}

void SimplePersonFactory::freeObject(std::vector<AbstractPersonAPI *> persons){
	for(AbstractPersonAPI *p : persons){
		delete p;
		p = nullptr;
	}
}

AbstractPersonAPI *SimplePersonFactory::getObject(int criteria,
		std::string firstName, std::string lastName, double age, double GPA, double wage){
	AbstractPersonAPI *p = nullptr;
	switch(criteria){
	case(0): //person
			p = new Person(firstName,lastName, age);
			break;
	case(1): //student
			p = new Student(firstName,lastName, age, GPA);
			break;
	case(2): //employee
			p = new Employee(firstName,lastName, age, wage);
			break;
	}
	return p;
}

void SimplePersonFactory::demo(){
	std::cout<<std::endl<<"simple factory pattern demo..." <<std::endl;

	SimplePersonFactory obj;
	AbstractPersonAPI *p0, *p1, *p2;

	p0 = obj.getObject(0, "wenbo", "sun", 26, 4.0, 100000);
	p1 = obj.getObject(1, "zixuan", "xu", 23, 3.2, 80000);
	p2 = obj.getObject(2, "jianan", "wen", 24, 3.3, 75000);

	std::vector<AbstractPersonAPI *> persons;
	persons.push_back(p0);
	persons.push_back(p1);
	persons.push_back(p2);

	std::cout <<persons.size()<<" persons"<< std::endl;
	for(AbstractPersonAPI *p : persons){
		p->info();
	}

	//I have two freeObject method, one take AbstractPersonAPI pointer, another take vector<AbstractPersonAPI *>
	obj.freeObject(persons);
	//obj.freeObject(p0);
	//obj.freeObject(p1);
	//obj.freeObject(p2);
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
