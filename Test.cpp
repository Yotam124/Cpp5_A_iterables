/*
 * Test.cpp
 *
 *  Created on: 12 May 2019
 *      Author: yotam
 */

#include <iostream>
using namespace std;

#include "range.hpp"
#include "chain.hpp"
#include "zip.hpp"
#include "product.hpp"
#include "powerset.hpp"
#include "badkan.hpp"
#define COMMA ,

using namespace itertools;
using namespace std;

/*template <typename iterable> string iterable_to_string(const Iterable& iterable) {
	ostringstream ostr;
	for (decltype(*iterable.begin()) i: iterable){
		ostr << i << ",";
	}
	return ostr.str();
}*/

int main() {

	badkan::TestCase testcase;
	int grade=0;
	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0) {




		testcase.setname("Tests");















    grade = testcase.grade();
	} else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "Your grade is: "  << grade << endl;
	return 0;
}


