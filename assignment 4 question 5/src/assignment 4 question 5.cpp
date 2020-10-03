//============================================================================
// Name        : assignment.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>

void reverse_char_array( char data[],
std::size_t capacity);

void reverse_char_array( char data[],
std::size_t capacity){

	for (std::size_t k{capacity};k>0; k--){

		std::cout<<data[k-1]<<" ";

	}

}
int main() {





	std::size_t capacity{};
	std::cin>>capacity;

	char data[capacity];


	for (std::size_t i{0}; i<capacity; i++){

		std::cin>>data[i];

	}

	char*p_data=new char[capacity];

	p_data=data;

	for (std::size_t i{0}; i<capacity; i++){

		std::cout<<p_data[i];

	}
}





