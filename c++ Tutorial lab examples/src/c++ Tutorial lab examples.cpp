//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

void pointer_mechanics1();
void pointer_mechanics1(){


	int * p_quantity{nullptr};

	// alocate memory, set values

	// space for dinamyc alocator,
	// more space for int


	p_quantity=new int {25};// store memory, more memory


	std::cout<<"Adress of dinamic"<<p_quantity<<std::endl;

	std::cout<<"Adreess of p_quantity"<<&p_quantity;

	std::cout<<"Value stored in the dynamic int variable"<<*p_quantity;




}
// if you misuse a pointer
/*
 * compilEr int * p_int_1=NULL;
 */
int main() {


	int * p_quantity{0};

	// alocate memory, set values

	// space for dinamyc alocator,
	// more space for int


	p_quantity=new int {25};// store memory, more memory


	std::cout<<"Adress of dinamic "<<p_quantity<<std::endl;// security memory, the use will be harder, random

	std::cout<<"Adreess of p_quantity pointer "<<&p_quantity<<std::endl;

	std::cout<<"Value stored in the dynamic int variable "<<*p_quantity<<std::endl;// The value stored in the pointer is the adress

	std::cout<<"Value stored in a pointer "<<p_quantity<<std::endl;

	/*
	 * if we alocate mempory, we have to delete value after using it
	 */

	delete p_quantity;

	p_quantity=nullptr;// I do not need the memory, sending value back to the same value

	std::cout<<"Address of pointer after delete "<<p_quantity<<std::endl;

	// new variables new with mathcing va


}
