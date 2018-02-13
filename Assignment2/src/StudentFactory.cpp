/*
 * StudentFactory.cpp
 *
 *  Created on: 2018Äê2ÔÂ13ÈÕ
 *      Author: XiaoCase
 */

#include "StudentFactory.h"
#include "Student.h"
#include <iostream>

namespace edu {
namespace neu {
namespace csye6205 {

StudentFactory::StudentFactory() {
}

StudentFactory::~StudentFactory() {
}

AbstractPersonAPI * StudentFactory::getObject(std::string firstName, std::string lastName, double age, double GPA, double wage){
	AbstractPersonAPI *p = nullptr;
	p = new Student(firstName,lastName,age,GPA);
	return p;
}

void StudentFactory::freeObject (AbstractPersonAPI *p){
	delete p;
	p = nullptr;
}

void StudentFactory::freeObject (std::vector<AbstractPersonAPI *> persons){
	for(AbstractPersonAPI * p :persons){
		delete p;
		p = nullptr;
	}
}

void StudentFactory::demo(){
	std::cout<<std::endl <<"student GoF Factory pattern demo..." <<std::endl;

	StudentFactory obj;
	AbstractPersonAPI *s1 = obj.getObject("wenbo", "sun", 26, 4.0, 100000);
	AbstractPersonAPI *s2 = obj.getObject("jianan", "wen", 25, 3.0, 50000);

	std::vector<AbstractPersonAPI *> persons;
	persons.push_back(s1);
	persons.push_back(s2);

	std::cout<<persons.size()<< " students."<< std::endl;
	for(AbstractPersonAPI *p : persons){
		p->info();
	}

	//I have two freeObject method, one take AbstractPersonAPI pointer, another take vector<AbstractPersonAPI *>
	obj.freeObject(persons);
	//obj.freeObject(s0);
	//obj.freeObject(s1);
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
