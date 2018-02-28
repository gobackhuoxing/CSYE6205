/*
 * Chart.h
 *
 *  Created on: 2018Äê2ÔÂ27ÈÕ
 *      Author: XiaoCase
 */

#ifndef CHART_H_
#define CHART_H_


#include "Item.h"
#include <iostream>
#include <vector>

namespace neu {
namespace edu {
namespace csye6205 {

using namespace std;

template<typename T>
class Chart {
private:
	vector<T> cart;
public:
	Chart(){

	}
	virtual ~Chart(){

	}
//	template <typename T>
	void add(T item){
		cart.push_back(item);
	}

	void show(){
		for(auto item: cart){
			item.show();
		}
	}

	static void demo(){
		std::cout<<"Item demo:"<<std::endl;
		T a(1,"a",10);
		T b(2,"b",20);
		T c(3,"c",30);
		Chart d;
		d.add(a);
		d.add(b);
		d.add(c);
		d.show();
	}

};

} /* namespace csye6205 */
} /* namespace edu */
} /* namespace neu */

#endif /* CHART_H_ */
