/*
 * BookstoreBase.cpp
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#include "BookstoreBase.h"
#include <fstream>
#include <sstream>
#include <algorithm>
#include "BookFactory.h"
#include "EmployeeFactory.h"

namespace edu {
namespace neu {
namespace csye6205 {

using namespace std;

BookstoreBase::BookstoreBase(string _name): name(_name) {
	// TODO Auto-generated constructor stub

}

BookstoreBase::~BookstoreBase() {
	// TODO Auto-gener+++ated destructor stub
}

void BookstoreBase::addBook(std::string path){
	//read data from csv and save into datalist
	ifstream file(path);
	vector<vector<string>> datalist;
	if (file) {
		string line = "";
	    while (getline(file, line)) {
	    	stringstream sep(line);
	        string data;
	        datalist.push_back(vector<string>());
	        while (getline(sep, data, ',')) {
	        	datalist.back().push_back(data);
	        }
	    }
	}

	BookFactory factory;
	for(auto data: datalist){
		booklist.push_back(factory.getObj(data));
	}
}

void BookstoreBase::addEmployee(std::string path){
	//read data from csv and save into datalist
	ifstream file(path);
	vector<vector<string>> datalist;
	if (file) {
		string line = "";
	    while (getline(file, line)) {
	    	stringstream sep(line);
	        string data;
	        datalist.push_back(vector<string>());
	        while (getline(sep, data, ',')) {
	        	datalist.back().push_back(data);
	        }
	    }
	}

	EmployeeFactory factory;
	for(auto data: datalist){
		employeelist.push_back(factory.getObj(data));
	}
}

void BookstoreBase::showEmployees(){
	cout<< "Employees list: "<< endl;
	for(auto& employee: employeelist){
		cout<< *employee << endl;
	}
}

void BookstoreBase::showBooks(){
	cout<< "Books list(sort by price): "<< endl;
	sort(booklist.begin(),booklist.end(),[](UniquePtrBook_t& a, UniquePtrBook_t& b){return a->getPrice() < b->getPrice();});
	for(auto& book: booklist){
		cout<< *book << endl;
	}

	auto sortbyname = [](UniquePtrBook_t& a, UniquePtrBook_t& b){
		std::string n1 = a->getName();
		std::string n2 = b->getName();
		int length = n1.length();
		for(int i=0; i< length; i++){
			if(n1[i]>n2[i]) return false;
			if(n1[i]<n2[i]) return true;
		}
		return true;
	};
	cout<< "Books list(sort by name): "<< endl;
	sort(booklist.begin(),booklist.end(),sortbyname);
	for(auto& book: booklist){
		cout<< *book << endl;
	}
}


} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
