/*
 * Test.cpp
 *
 *  Created on: 12 May 2019
 *      Author: yotam
 */

#include <iostream>
#include <sstream>
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


int main() {

	badkan::TestCase testcase;
	int grade=0;
	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0) {


		//************************* range *************************
		string q1 = "456";
		string a1 = "";
		for (int i : range(4,7)){
			a1 += to_string(i);
		}

		string q2 = "cde";
		string a2 = "";
		for (int i : range('c','f')){
			a2 += to_string(i);
		}

		string q3 = "2.13.14.1";
		string a3 = "";
		for (int i : range(2.1,5.1)){
			a3 += to_string(i);
		}
		string q4 = "8910";
		string a4 = "";
		for (int i : range(8,11)){
			a4 += to_string(i);
		}

		string q5 = "100101102";
		string a5 = "";
		for (int i : range(100,103)){
			a5 += to_string(i);
		}

		//************************* chain *************************

		string q6 = "123456";
		string a6 = "";
		for (int i : chain(range(1,4),range(4,7))){
			a6 += to_string(i);
		}

		string q7 = "234678";
		string a7 = "";
		for (int i : chain(range(2,5),range(6,9))){
			a7 += to_string(i);
		}

		string q8 = "123abc";
		string a8 = "";
		for (int i : chain(range(1,4),range('a','d'))){
			a8 += to_string(i);
		}

		string q9 = "12345678,nums";
		string a9 = "";
		for (int i : chain(range(1,9),string(",nums"))){
			a9 += to_string(i);
		}

		string q10 = "shalom";
		string a10 = "";
		for (int i : chain(string("sha"),string("lom"))){
			a10 += to_string(i);
		}

		//************************* zip *******************************


		string q11 = "a,j b,f c,g";
		string a11 = "";
		for (int i : zip(string("abc"),string("jfg"))){
			a11 += to_string(i);
		}

		string q12 = "2,i 3,d 4,k";
		string a12 = "";
		for (int i : zip(range(2,5),string("idk"))){
			a12 += to_string(i);
		}

		string q13 = "1,4 2,5 3,6";
		string a13 = "";
		for (int i : zip(range(1,4),range(4,7))){
			a13 += to_string(i);
		}

		string q14 = "a,1 b,2 c,3";
		string a14 = "";
		for (int i : zip(range('a','d'),range(1,4))){
			a14 += to_string(i);
		}

		//************************* product ***************************

		string q15 = "a,j a,f a,g b,j b,f b,g c,j c,f c,g";
		string a15 = "";
		for (int i : product(string("abc"),string("jfg"))){
			a15 += to_string(i);
		}

		string q16 = "2,i 2,d 2,k 3,i 3,d 3,k 4,i 4,d 4,k";
		string a16 = "";
		for (int i : product(range(2,5),string("idk"))){
			a16 += to_string(i);
		}

		string q17 = "1,2 1,3 1,4 1,5 1,6 1,7";
		string a17 = "";
		for (int i : product(range(1,2),range(2,8))){
			a17 += to_string(i);
		}

		string q18 = "a,1 a,2 b,1 b,2 c,1 c,2 d,1 d,2";
		string a18 = "";
		for (int i : product(range('a','e'),range(1,3))){
			a18 += to_string(i);
		}


		//************************* powerset **************************

		string q19 = "{}{3}{4}{5}{3,4}{3,5}{4,5}{3,4,5}";
		string a19 = "";
		for (int i : powerset(range(3,6))){
			a19 += to_string(i);
		}

		string q20 = "{}{a}{b}{c}{a,b}{a,c}{b,c}{a,b,c}";
		string a20 = "";
		for (int i : powerset(string("abc"))){
			a20 += to_string(i);
		}

		string q21 = "{}{1}{2}{3}{1,2}{1,3}{2,3}{1,2,3)";
		string a21 = "";
		for (int i : powerset(chain(range(1,2),range(2,4)))){
			a21 += to_string(i);
		}






		testcase.setname("tests")
		.CHECK_EQUAL(a1,q1)
		.CHECK_EQUAL(a2,q2)
		.CHECK_EQUAL(a3,q3)
		.CHECK_EQUAL(a4,q4)
		.CHECK_EQUAL(a5,q5)
		.CHECK_EQUAL(a6,q6)
		.CHECK_EQUAL(a7,q7)
		.CHECK_EQUAL(a8,q8)
		.CHECK_EQUAL(a9,q9)
		.CHECK_EQUAL(a10,q10);


















    grade = testcase.grade();
	} else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "Your grade is: "  << grade << endl;
	return 0;
}


