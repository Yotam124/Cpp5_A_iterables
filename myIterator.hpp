/*
 * iterator.hpp
 *
 *  Created on: 12 May 2019
 *      Author: yotam
 */
#include <iostream>
#pragma once

class myIterator{

	double value;

public:

	myIterator(double value) : value(value) {
	}

	double& operator*() {
		return value;
	}


	myIterator& operator++(){
		this->value++;
		return *this;
	}
	const myIterator operator++(int) {
		myIterator CopyValue(this->value);
		this->value++;
		return CopyValue;
	}

	bool operator==(const myIterator& rhs) const {
		return (value == rhs.value);
	}
	bool operator!=(const myIterator& rhs) const {
		return !(value == rhs.value);
	}

};
