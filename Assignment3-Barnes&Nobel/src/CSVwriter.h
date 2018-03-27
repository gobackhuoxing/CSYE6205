/*
 * CSVwriter.h
 *
 *  Created on: 2018��3��21��
 *      Author: XiaoCase
 */

#ifndef CSVWRITER_H_
#define CSVWRITER_H_

#include <fstream>
#include <iostream>
#include <vector>

namespace edu {
namespace neu {
namespace csye6205 {

class CSVwriter {
public:
	CSVwriter();
	virtual ~CSVwriter();
	void writeFile(std::vector<std::string> list, std::string path);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* CSVWRITER_H_ */
