//============================================================================
// Name        : reverse.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


void reverse (int data[], std::size_t capacity){


	for (size_t k=capacity-1; k>0; k--){

		std::cout<<data[k]<<" ";

	}
	std::cout<<data[0];

}

int main() {

	std::size_t capacity=7;
	int vector[capacity]={1,2,3,4,5,6,7};

	reverse(vector, capacity);
}
