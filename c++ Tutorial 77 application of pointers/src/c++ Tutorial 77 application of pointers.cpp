//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

void illegal_interval( double a, double b);

void illegal_interval( double a, double b){

	if (a<b){

		try{
			std::cout<<"["<<a<<","<<b<<"]";

		}

		catch(...){

			std::cout<<"Invalid value";

			throw -1;

		}

	}
}

int main(){

char c='3';
const char &c_r{c};

std::cout<<c_r;


}
/*
 * char c; // 1 bite
 * int i{} // 4 bites
 * double d{} // 8 bites
 * char *p_c{&c} // address of d 1bite
 * int *p_i{&i} // address of i 4 bites
 * double *p_d{&d}// address of f 8 bites
 * const char &c_r{c};
 *
 *const double &d_r{d}
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
