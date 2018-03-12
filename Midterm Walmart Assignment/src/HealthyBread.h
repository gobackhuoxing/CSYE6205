/*
 * HealthyBread.h
 *
 *  Created on: 2018Äê2ÔÂ28ÈÕ
 *      Author: XiaoCase
 */

#ifndef HEALTHYBREAD_H_
#define HEALTHYBREAD_H_

#include "Item.h"

namespace edu {
namespace neu {
namespace csye6205 {

class HealthyBread : public Item{
private:
	float calories;
public:
	HealthyBread(int _itemNumber,double _price,float _calories,std::string _name);
	virtual ~HealthyBread();

	float get() const{
		return calories;
	}

	void setCalories(float calories) {
		this->calories = calories;
	}

	double by();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* HEALTHYBREAD_H_ */
