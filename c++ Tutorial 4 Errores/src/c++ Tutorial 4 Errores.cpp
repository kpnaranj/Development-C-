//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int edad;
		char sexo[10];
		double metros;
		std::cout<<"enter your age: "<<std::endl; std::cin>>edad;
		std::cout<<"enter your sex: "<<std::endl; std::cin>>sexo;
		std::cout<<"enter your height: "<<std::endl; std::cin>>metros;

		std::cout<<"your age is: "<<edad<<std::endl;
		std::cout<<"your sex is: "<<sexo<<std::endl;
		std::cout<<"your height is:  "<<metros<<std::endl;
		return 0;
}
