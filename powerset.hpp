/*
 * powerset.hpp
 *
 *  Created on: 7 May 2019
 *      Author: yotam dafna, tomer hazan, matti  stern.
 */
#include <iostream>
#include "myIterator.hpp"
#include "range.hpp"
#pragma once

namespace itertools {


template <typename T> class powerset {

	T set;

public:

	powerset(T a) : set(a){}

	myIterator begin() const {
		return myIterator(1);
	}
	myIterator end() const {
		return myIterator(1);
	}
};
}
