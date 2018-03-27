/*
 * BarnesAndNobel.cpp
 *
 *  Created on: 2018Äê3ÔÂ27ÈÕ
 *      Author: XiaoCase
 */

#include "BarnesAndNobel.h"
#include "CSVwriter.h"
#include "vector"

namespace edu {
namespace neu {
namespace csye6205 {

using namespace std;

BarnesAndNobel::BarnesAndNobel(std::string _name): BookstoreBase(_name) {
	// TODO Auto-generated constructor stub

}

BarnesAndNobel::~BarnesAndNobel() {
	// TODO Auto-generated destructor stub
}

void BarnesAndNobel::demo(){
	CSVwriter csvwriter;

	//create employee data csv
	vector<string> employees;
	string e1 = "1,wenbo sun,27,200000";
	string e2 = "2,zixuan xu,24,150000";
	string e3 = "3,jianan wen,26,100000";
	employees.push_back(e1);
	employees.push_back(e2);
	employees.push_back(e3);
	csvwriter.writeFile(employees,"employee.csv");

	//create book data csv
	vector<string> books;
	string b1 = "1,The Fourteenth Goldfish,Jennifer L Holm,14";
	string b2 = "2,If I Did It: Confessions of the Killer,the Goldman Family,12";
	string b3 = "3,Milk and Honey,Rupi Kaur,9";
	string b4 = "4,Everything She Thought She Wanted,Elizabeth Buchan,15";
	string b5 = "5,The Devil's Highway,Luis Alberto Urrea,20";
	books.push_back(b1);
	books.push_back(b2);
	books.push_back(b3);
	books.push_back(b4);
	books.push_back(b5);
	csvwriter.writeFile(books,"book.csv");

	//read data, create obj, and add them into list
	BarnesAndNobel barnesandnobel("BarnesAndNobel");
	barnesandnobel.addBook("book.csv");
	barnesandnobel.addEmployee("employee.csv");

	//show data
	barnesandnobel.showEmployees();
	barnesandnobel.showBooks();

	//delete obj
	barnesandnobel.clean();

	/*
  * console output
  *
  * main starting
	Employees list:
	ID:1 Name:wenbo sun Age:27 Wage:200000
	ID:2 Name:zixuan xu Age:24 Wage:150000
	ID:3 Name:jianan wen Age:26 Wage:100000
	Books list(sort by price):
	ID:3 Name:Milk and Honey Author:Rupi Kaur price:9.000000
	ID:2 Name:If I Did It: Confessions of the Killer Author:the Goldman Family price:12.000000
	ID:1 Name:The Fourteenth Goldfish Author:Jennifer L Holm price:14.000000
	ID:4 Name:Everything She Thought She Wanted Author:Elizabeth Buchan price:15.000000
	ID:5 Name:The Devil's Highway Author:Luis Alberto Urrea price:20.000000
	Books list(sort by name):
	ID:4 Name:Everything She Thought She Wanted Author:Elizabeth Buchan price:15.000000
	ID:2 Name:If I Did It: Confessions of the Killer Author:the Goldman Family price:12.000000
	ID:3 Name:Milk and Honey Author:Rupi Kaur price:9.000000
	ID:5 Name:The Devil's Highway Author:Luis Alberto Urrea price:20.000000
	ID:1 Name:The Fourteenth Goldfish Author:Jennifer L Holm price:14.000000
	main ending
  *
  */

}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
