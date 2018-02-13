/*
 * AbstractPersonAPI.h
 *
 *  Created on: 2018��1��24��
 *      Author: XiaoCase
 */

#ifndef ABSTRACTPERSONAPI_H_
#define ABSTRACTPERSONAPI_H_

#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractPersonAPI {

public:
	AbstractPersonAPI();
	virtual ~AbstractPersonAPI();
	virtual void info() = 0;

	static void show();
};

}
}
}

#endif /* ABSTRACTPERSONAPI_H_ */
