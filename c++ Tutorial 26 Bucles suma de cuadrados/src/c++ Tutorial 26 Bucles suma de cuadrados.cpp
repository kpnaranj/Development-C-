//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	int cuadrado=0, result=0;

	for (int i=0;i<=10;i++){

	cuadrado=i*i;		// 0*0=0, 1*1=1, 2*2=4
	result+=cuadrado;

	; // result=0 result=0+1,
					//1 new result result=0+1+4=5,
	}

	std::cout<<"The sum of squares is: "<<result<<std::endl;


}
