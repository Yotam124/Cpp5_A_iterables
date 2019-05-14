/*
 * range.hpp
 *
 *  Created on: 7 May 2019
 *      Author: yotam dafna, tomer hazan, matti  stern.
 */

#include <iostream>
#include <assert.h>
//#include "myIterator.hpp"
#pragma once


namespace itertools {


template <typename T>
class Range {

	T c_begin;
	T c_end;

public:

	Range(T a, T b) : c_begin(a) , c_end(b){}

	class iterator{
	private:

		T curr;

	public:

		iterator(T c)
		: curr(c) {
		}

		T operator*() const {
			return curr;
		}

		iterator& operator++(){
			curr++;
			return *this;
		}

		bool operator==(const iterator& other) const {
			return (curr == other.curr);
		}
		bool operator!=(const iterator& other) const {
			return (curr != other.curr);
		}

	};

	iterator begin()  {
		return iterator(c_begin);
	}
	iterator end()  {
		return iterator(c_end);
	}

};
template<typename T> Range<T> range(T a, T b){
		return Range<T> (a, b);
}



}


