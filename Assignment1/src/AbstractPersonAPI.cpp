/*
 * AbstractPersonAPI.cpp
 *
 *  Created on: 2018��1��24��
 *      Author: XiaoCase
 */

#include "AbstractPersonAPI.h"
#include <iostream>

namespace edu {
namespace neu {
namespace csye6205 {

AbstractPersonAPI::AbstractPersonAPI(std::string _firstName, std::string _lastName, double _age) :
		firstName(_firstName), lastName(_lastName), age(_age){

}

AbstractPersonAPI::~AbstractPersonAPI() {

}

void AbstractPersonAPI::info() {
	std::cout<< "This is a person, name: "<< firstName << " "<< lastName << " age: " << age << std::endl;
}

}
}
}

