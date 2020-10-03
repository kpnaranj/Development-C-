//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

void reverse(int data[],std::size_t capacity){

	for (size_t k=capacity-1; k>0; k--){

			std::cout<<data[k]<<" ";

		}
		std::cout<<data[0];

}

void rotate( int data[], std::size_t capacity, unsigned int
rotate_by ){


	for (unsigned int i=0; i<rotate_by; i++){
		int aux=0;
		for (std::size_t k{0}; k<capacity; k++){

			if (k==0){
				aux=data[i];
			}

			data[k]=data[k+1];

			data[capacity]=aux;
		}
	}



	reverse(data,capacity);

}

int main(){

	unsigned int counter{};

	std::cin>>counter;

	std::size_t capacity;

	std::cin>>capacity;

	int array[capacity]={1,2,3,4,5,6,7,8};

	rotate(array,capacity,counter);

}
