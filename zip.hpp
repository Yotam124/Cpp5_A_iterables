/*
 * zip.hpp
 *
 *  Created on: 7 May 2019
 *      Author: yotam dafna, tomer hazan, matti  stern.
 */
#include <iostream>
#include "myIterator.hpp"
#include "range.hpp"
#pragma once



namespace itertools {

template <typename T, typename H> class zip {

	T first;
	H second;

public:

	zip(T a, H b) : first(a) , second(b) {}

	myIterator begin(){
		return myIterator(1);
	}
	myIterator end(){
		return myIterator(1);
	}
};
}
