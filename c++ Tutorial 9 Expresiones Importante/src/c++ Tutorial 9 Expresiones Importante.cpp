//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	double  alumn1,alum2, alumn3, result=0;
	std::cout<<"grade 1: ";std::cin>>alumn1;
	std::cout<<"grade 2: ";std::cin>>alum2;
	std::cout<<"grade 3: ";std::cin>>alumn3;


	result=(alumn1+alum2+alumn3)/(3);

	std::cout<<"The course average is: "<<result<<std::endl;

}
