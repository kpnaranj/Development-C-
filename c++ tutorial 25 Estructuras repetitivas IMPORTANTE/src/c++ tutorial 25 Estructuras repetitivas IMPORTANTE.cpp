//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



// Lecture to intriduce values and save them into
// the memory until returning zero

#include <iostream>


int main() {
	int a, conteo1=0;


	do {
		std::cout<<"Number:"<<std::endl;
		std::cin>>a;
		if (a>0){
			conteo1++;
		}
	}	while (a!=0);

	std::cout<<"Total numbers: "<<conteo1<<std::endl;




}
