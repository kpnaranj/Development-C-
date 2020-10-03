//============================================================================
// Name        : ejercicios.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>



int max(int data[],std::size_t capacity);


/////////////////////////////////Max


int max(int data[],std::size_t capacity){

	int r_max=0;

	for (size_t k{0}; k<capacity; k++){

		if (data[k]>r_max){

			r_max=data[k];
		}

	}

	return r_max;
}
////////////////////////////Ones
unsigned int ones( bool binary_string[],
std::size_t capacity );

unsigned int ones( bool binary_string[],
std::size_t capacity ){
		int r_result=1, value=0;

	while (capacity>r_result){
		r_result*=2;
		value++;
	}
	value--;

	return value;

}

////////////////////////////////////Main

int main(){

	std::size_t capacity;

	std::cin>>capacity;

	int vect[capacity];

	bool vector[capacity];

	ones(vector,capacity);

	std::cout<<ones(vector,capacity);



	for (size_t k{0}; k<capacity; k++){

		std::cin>>vect[k];

	}

	std::cout<<max(vect,capacity);



	return 0;
}
