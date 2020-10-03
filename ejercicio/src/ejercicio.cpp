//============================================================================
// Name        : ejercicio.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
void illegal_interval(double a, double b){

try {
	// Add a value that will throw ann exception
		if (a<b){

std::cout<<"["<<a<<", "<<b<<"]"<<std::endl;

		}
		else {
			// if something different throw -1
		throw -1;

		}
	}
		// For input that is not a number
	catch (...){

		std::cout<<"Error: Illegal interval identified "<<std::endl;
		// Return to the user
	}

}



