/*
 * Student.cpp
 *
 *  Created on: 2018Äê1ÔÂ24ÈÕ
 *      Author: XiaoCase
 */

#include "Student.h"
#include <iostream>
#include <vector>

namespace edu {
namespace neu {
namespace csye6205 {

Student::Student(std::string _firstName, std::string _lastName, double _age, double _GPA) : Person(_firstName, _lastName, _age), GPA(_GPA) {
}

Student::~Student() {
}

void Student::info(){
	//
	std::cout<< "This is a student, name: "<< firstName << " "<< lastName << " age: " << age <<" GPA: "<< GPA << std::endl;
}

void Student::demo(){
	std::cout<<std::endl<< "student constructor calling demo..." <<std::endl;
	Person p("jeremy", "sun", 24);
	Student s("wenbo", "sun", 27, 4.0);
	std::vector<AbstractPersonAPI*> persons;

	persons.push_back(&p);
	persons.push_back(&s);

	std::cout << persons.size() << " persons." << std::endl;
	for (AbstractPersonAPI *p_ptr : persons) {
		p_ptr->info();	// polymorphism
	}
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
