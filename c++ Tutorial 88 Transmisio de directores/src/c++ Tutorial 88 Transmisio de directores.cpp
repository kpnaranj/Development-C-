//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int hallarMax(int *,std::size_t);

int main() {
	std::size_t capacity=5;

	int numero[capacity]={3,5,2,8,1};

	std::cout<<hallarMax(numero,capacity);

}

int hallarMax(int *dir_vect,std::size_t capacity){

	int max=0;

	for (std::size_t k{0}; k<capacity; k++){

		// This is the pointer*(dir_vect+k)
		// the position towards it goes
		// dir_vector + something recorre position
		// * imprime el valor de la posicion

		if (*(dir_vect+k)>max){

			max=*(dir_vect+k);

		}

	}

	return max;

}
