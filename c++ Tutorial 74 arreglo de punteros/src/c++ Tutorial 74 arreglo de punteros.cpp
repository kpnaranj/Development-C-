//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	int numeros[]={1,4,3,4,5,6};

	int *p_numeros;

	p_numeros= &numeros[0]; // We start from the initial
	// position and take the address of it

	// Better way of approaching

	p_numeros= numeros; // We take all the array

	for (int i=0; i<5; i++){

		std::cout<<"Elements of vectors"<<i<<" "<<p_numeros++<<std::endl;

	}
	// When we use pointers, to access to the memory
	// we use *p_pointers + position you want to add
	//
}
