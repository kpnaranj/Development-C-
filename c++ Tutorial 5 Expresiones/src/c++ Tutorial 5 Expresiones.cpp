//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	double a, b, resultado=0;
	std::cout<<"enter number 1: ";std::cin>>a;
	std::cout<<"enter number 2: ";std::cin>>b;

	resultado= a/b+1;
	std::cout.precision(3);
	std::cout<<"The result of your numbers are: "<<resultado<<std::endl;
	return 0;


}
