/*
 * NortheasternU.cpp
 *
 *  Created on: 2018Äê1ÔÂ31ÈÕ
 *      Author: XiaoCase
 */

#include "NortheasternU.h"
#include "Student.h"
#include "Employee.h"
#include <iostream>
#include <vector>

namespace edu {
namespace neu {
namespace csye6205 {

NortheasternU::NortheasternU() {
}

NortheasternU::NortheasternU(int _id, std::string _name) : UniversityBase(_id, _name) {
}

NortheasternU::~NortheasternU() {
}

void NortheasternU::demo(){
	std::cout << "This is NortheasternU demo:" <<std::endl;
	//create neu obj
	NortheasternU neu(1,"Northeastern");
	std::vector<AbstractSchoolAPI *> schools;
	schools.push_back(&neu);
	UniversityBase *u_ptr = &neu;

	//create student
	Student s1("Jianan", "Wen", 26, 2.5);
	Student s2("Zixuan", "Xu", 24, 2.6);
	Student s3("Wenbo", "Sun", 27, 4.0);
	std::vector<AbstractPersonAPI *> students;
	students.push_back(&s1);
	students.push_back(&s2);
	students.push_back(&s3);

	//create employees
	Employee e1("Daniel", "Peter", 40, 150000);
	Employee e2("Nik", "Brown", 35, 100000);
	std::vector<AbstractPersonAPI *> employees;
	employees.push_back(&e1);
	employees.push_back(&e2);

	//add students
	for(AbstractPersonAPI *s_ptr : students){
		u_ptr->addStudent(s_ptr);
	}

	//add employees
	for(AbstractPersonAPI *e_ptr : employees){
		u_ptr->addEmployee(e_ptr);
	}

	//show
	for(AbstractSchoolAPI *s_ptr : schools){
		s_ptr->show();
	}
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
