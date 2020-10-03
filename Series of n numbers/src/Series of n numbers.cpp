//============================================================================
// Name        : Series.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/*
 * Write a progra to calculate the sum of the following series
 * 1+1/2+1/4+1/5+1/n 1/0
 */

int main() {
	int number;
	std::cin>>number;
	double result=0;
	for (double n=1;n<=number;n++){
		result+= (1.0 /(n));
	}
	std::cout<<result<<std::endl;

}
