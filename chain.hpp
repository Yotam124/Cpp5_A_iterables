/*
 * chain.hpp
 *
 *  Created on: 7 May 2019
 *      Author: yotam dafna, tomer hazan, matti  stern.
 */
#include <iostream>
#include "myIterator.hpp"
#include "range.hpp"
#pragma once

namespace itertools {

template <typename T1, typename T2>
class Chain {

	T1 first;
	T2 second;


public:

	Chain(T1 a, T2 b) : first(a) , second(b){}

	myIterator begin()  {
		return myIterator(1);
	}
	myIterator end()  {
		return myIterator(1);
	}

};

template<typename T1, typename T2> Chain<T1,T2> chain(T1 a, T2 b){
		return Chain<T1,T2> (a, b);
}


}

