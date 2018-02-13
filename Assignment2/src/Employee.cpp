/*
 * Employee.cpp
 *
 *  Created on: 2018Äê1ÔÂ24ÈÕ
 *      Author: XiaoCase
 */

#include "Employee.h"
#include <iostream>
#include <vector>

namespace edu {
namespace neu {
namespace csye6205 {

Employee::Employee(std::string _firstName, std::string _lastName, double _age, double _wage):Person(_firstName, _lastName,_age) , wage(_wage) {
}

Employee::~Employee() {
}

void Employee::info(){
	std::cout<< "This is a employee, name: "<< firstName << " "<< lastName << " age: " << age <<" wage: "<< wage << std::endl;
}

void Employee::demo(){
	std::cout<<std::endl <<"employee constructor calling demo..." <<std::endl;
	Person p("jeremy", "sun", 24);
	Employee e("wenbo", "sun", 27, 100000);
	std::vector<AbstractPersonAPI*> persons;

	persons.push_back(&p);
	persons.push_back(&e);

	std::cout << persons.size() << " persons." << std::endl;
	for (AbstractPersonAPI *p_ptr : persons) {
		p_ptr->info();	// polymorphism
	}
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
