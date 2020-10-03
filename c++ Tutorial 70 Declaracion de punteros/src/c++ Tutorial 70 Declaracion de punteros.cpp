//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	int num, *p_num;
	num=20;

	p_num= &num;

	std::cout<<p_num;
	std::cout<<*p_num;

}
