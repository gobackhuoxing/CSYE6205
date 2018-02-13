/*
 * Student.h
 *
 *  Created on: 2018Äê1ÔÂ24ÈÕ
 *      Author: XiaoCase
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"
#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class Student : public Person{
private:
	using Person::firstName;
	using Person::lastName;
	using Person::age;
	double GPA;
public:
	Student();
	Student(std::string _firstName, std::string _lastName, double _age, double _GPA);
	virtual ~Student();
	virtual void info();
	static void demo();

	double getGpa() const {
		return GPA;
	}

	void setGpa(double gpa) {
		GPA = gpa;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STUDENT_H_ */
