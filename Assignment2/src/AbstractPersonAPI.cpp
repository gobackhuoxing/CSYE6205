/*
 * AbstractPersonAPI.cpp
 *
 *  Created on: 2018Äê1ÔÂ24ÈÕ
 *      Author: XiaoCase
 */

#include "AbstractPersonAPI.h"
#include <iostream>
#include "Student.h"
#include "StudentFactory.h"
#include "Employee.h"
#include "EmployeeFactory.h"
#include "SimplePersonFactory.h"

namespace edu {
namespace neu {
namespace csye6205 {

AbstractPersonAPI::AbstractPersonAPI() {
}

AbstractPersonAPI::~AbstractPersonAPI() {
}

void AbstractPersonAPI::info() {
}

void AbstractPersonAPI::show(){
	//constructor calling
	std::cout<<std::endl<< "constructor calling demo..." <<std::endl;
	Employee e("jianan", "wen", 25, 50000);
	Student s("wenbo", "sun", 26, 4.0);
	std::vector<AbstractPersonAPI*> persons1;

	persons1.push_back(&e);
	persons1.push_back(&s);

	std::cout << persons1.size() << " persons." << std::endl;
	for (AbstractPersonAPI *p_ptr : persons1) {
		p_ptr->info();
	}


	//simple factory
	std::cout<<std::endl<<"simple factory pattern demo..." <<std::endl;

	SimplePersonFactory obj;
	AbstractPersonAPI *p1, *p2;

	p1 = obj.getObject(2, "zixuan", "xu", 23, 3.2, 75000);
	p2 = obj.getObject(1, "jianan", "wen", 25, 3.3, 50000);

	std::vector<AbstractPersonAPI *> persons2;
	persons2.push_back(p1);
	persons2.push_back(p2);

	std::cout <<persons2.size()<<" persons"<< std::endl;
	for(AbstractPersonAPI *p : persons2){
		p->info();
	}

	//I have two freeObject method, one take AbstractPersonAPI pointer, another take vector<AbstractPersonAPI *>
	obj.freeObject(persons2);
	//obj.freeObject(p1);
	//obj.freeObject(p2);


	//factory pattern
	std::cout<<std::endl <<"factory pattern demo..." <<std::endl;

	StudentFactory obj1;
	EmployeeFactory obj2;
	AbstractPersonAPI *s1 = obj1.getObject("zixuan", "xu", 24, 3.2, 75000);
	AbstractPersonAPI *e1 = obj2.getObject("wenbo", "sun", 26, 4.0, 100000);

	std::vector<AbstractPersonAPI *> persons;
	persons.push_back(s1);
	persons.push_back(e1);

	std::cout<<persons.size()<< " persons."<< std::endl;
	for(AbstractPersonAPI *p : persons){
		p->info();
	}

	//I have two freeObject method, one take AbstractPersonAPI pointer, another take vector<AbstractPersonAPI *>
	obj.freeObject(persons);
	//obj.freeObject(e0);
	//obj.freeObject(e1);
}

}
}
}

