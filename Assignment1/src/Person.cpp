/*
 * Person.cpp
 *
 *  Created on: 2018Äê1ÔÂ31ÈÕ
 *      Author: XiaoCase
 */

#include "Person.h"
#include "AbstractPersonAPI.h"
#include <iostream>
#include <vector>

namespace edu {
namespace neu {
namespace csye6205 {

Person::Person(std::string _firstName, std::string _lastName, double age): AbstractPersonAPI(_firstName, _lastName, age) {

}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

void Person::info(){
	std::cout<< "This is a Person, name: "<< firstName << " "<< lastName << " age: " << age << std::endl;
}

void Person::demo(){
	std::cout<< "person demo..." <<std::endl;
	Person p("jeremy", "sun", 24);
	std::vector<AbstractPersonAPI*> persons;

	persons.push_back(&p);

	std::cout << persons.size() << " persons." << std::endl;
	for (AbstractPersonAPI *p_ptr : persons) {
		p_ptr->info();	// polymorphism
	}
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
