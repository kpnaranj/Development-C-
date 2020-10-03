//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	int edad;

	std::cin>>edad;

	if (edad>=18&&edad<=25){
		std::cout<<"Correct input";
	}
	else {
		std::cout<<"Incorrect input";
	}
}
