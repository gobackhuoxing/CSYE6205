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
#include <algorithm>

namespace edu {
namespace neu {
namespace csye6205 {

NortheasternU::NortheasternU() {
}

NortheasternU::NortheasternU(int _id, std::string _name) : UniversityBase(_id, _name) {
}

NortheasternU::~NortheasternU() {
}

void NortheasternU::sortStudentByAge(){
	std::cout<<std::endl << "Sort student by age" << std::endl;
	std::sort(students.begin(), students.end(),Student::sortByAge);
	showStudents();
}
void NortheasternU::sortStudentByGPA(){
	std::cout<<std::endl << "Sort student by GPA" << std::endl;
	std::sort(students.begin(), students.end(),Student::sortByGPA);
	showStudents();
}
void NortheasternU::sortEmployeeByWage(){
	std::cout<<std::endl << "Sort employee by wage" << std::endl;
	std::sort(employees.begin(), employees.end(),Employee::sortByWage);
	showEmployees();
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
	std::vector<Student *> studentss;
	studentss.push_back(&s1);
	studentss.push_back(&s2);
	studentss.push_back(&s3);

	//create employees
	Employee e1("Daniel", "Peter", 40, 150000);
	Employee e2("Nik", "Brown", 35, 100000);
	Employee e3("Wenbo", "Sun", 27, 200000);
	std::vector<Employee *> employeess;
	employeess.push_back(&e1);
	employeess.push_back(&e2);
	employeess.push_back(&e3);

	//add students
	for(Student *s_ptr : studentss){
		u_ptr->addStudent(s_ptr);
	}

	//add employees
	for(Employee *e_ptr : employeess){
		u_ptr->addEmployee(e_ptr);
	}

	//show
	std::cout<<std::endl << "Before sort" << std::endl;
	for(AbstractSchoolAPI *s_ptr : schools){
		s_ptr->show();
	}


	neu.sortStudentByAge();
	neu.sortStudentByGPA();
	neu.sortEmployeeByWage();

//	std::sort(neu.students.begin(), neu.students.end(),Student::sortByAge);
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
