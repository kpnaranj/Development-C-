//=======================+=================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	int destruct[5]={1,2,3,4,5};
	int instruct[5]={6,7,8,9,0};
	int hola[10];
	for (int i=5; i<10; i++){

		hola[i-5]=destruct[i-5];
		hola[i]=instruct[i-5];

	}

	for (int i=0; i<10; i++){
		std::cout<<hola[i]<<", ";
	}

}
