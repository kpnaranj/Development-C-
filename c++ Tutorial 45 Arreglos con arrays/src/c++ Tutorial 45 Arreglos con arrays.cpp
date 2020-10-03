//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	int arrays[2];

	for (int i=0;i<2;i++){

	std::cin>>arrays[i];

	}
	std::cout<<"[";
	for (int i=0;i<2;i++){

		std::cout<<arrays[i];

		}
	std::cout<<"]"<<std::endl;

		std::cout<<std::endl;

	for (int i=1; i>=0; i--){
		std::cout<<arrays[i]<<", ";
	}

	int n;
	std::cin>>n;

	std::cout<<arrays[n];

}
