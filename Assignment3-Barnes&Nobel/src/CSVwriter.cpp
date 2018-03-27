/*
 * CSVwriter.cpp
 *
 *  Created on: 2018Äê3ÔÂ21ÈÕ
 *      Author: XiaoCase
 */

#include "CSVwriter.h"
#include <fstream>

namespace edu {
namespace neu {
namespace csye6205 {

CSVwriter::CSVwriter() {
}

CSVwriter::~CSVwriter() {
}

void CSVwriter::writeFile(std::vector<std::string> list, std::string path){
	std::ofstream file;
	file.open (path);
	for(auto data: list){
		file << data+"\n";
	}
	file.close();
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
