//============================================================================
// Name        : Monthly.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * Montly bills based on:
 *
 */
#include <iostream>

int main() {
	int rupia{200};
	double calls;
	std::cin>>calls;

	if (calls<=100){
		rupia=200;
		}
	else if (calls>100&&calls<150){
		rupia+=(calls*0.6);

	}
	else if (calls>150&&calls<200){
		rupia+=(calls*0.5);
	}
	else {
		rupia+=(calls*0.4);
	}
	std::cout<<"the cost is "<<rupia<<std::endl;

}
