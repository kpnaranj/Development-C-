//============================================================================
// Name        : Membership.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/*
 * membership challenge, the charge is 2,500, it will increase its membership 4% per year
 * for six years
 * use a loop to display projected rates for the next six years
 */

int main() {
	double membership;
	membership=2500.0;
	double result=1;
	for (int i=1;i<=6;i++){
		result=membership+(membership*(0.04));
		membership=membership+(membership*(0.04));
		std::cout<<"the value for year "<<i<<" will be "<<result<<std::endl;
		std::cout<<" "<<std::endl;
		std::cout<<"the value for year "<<i<<" will be "<<membership;
		std::cout<<std::endl;

		}

	}
