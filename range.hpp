/*
 * range.hpp
 *
 *  Created on: 7 May 2019
 *      Author: yotam dafna, tomer hazan, matti  stern.
 */

#include <iostream>
#include "myIterator.hpp"
#pragma once


namespace itertools {


template <typename T> class range {

	T m_begin;
	T m_end;

public:

	range(T a, T b) : m_begin(a) , m_end(b){}

	myIterator begin() const {
		return myIterator(m_begin);
	}
	myIterator end() const {
		return myIterator(m_end);
	}








	/*class iterator{

	private:
		T value;

	public:

		iterator(T value) : value(value) {

		}

		T& operator*() {
			return value;
		}


		iterator& operator++(){
			this->value++;
			return *this;
		}
		const iterator operator++(int) {
			return nullptr;
		}

		bool operator==(const iterator& rhs) const {
			return (value == rhs.value);
		}
		bool operator!=(const iterator& rhs) const {
			return !(value == rhs.value);;
		}

	};
*/


	/*template<typename IT> range(IT begin, IT end) : range() {

	}
*/
};



}


