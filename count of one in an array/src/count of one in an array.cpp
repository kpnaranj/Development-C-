//============================================================================
// Name        : count.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// array [1,1,1,0,0,0] cuantos hay

unsigned int ones( bool binary_string[],
std::size_t capacity );

unsigned int ones( bool binary_string[],
std::size_t capacity ){

	unsigned int counter=0;
	for (std::size_t k=0; k<capacity; k++){

		if (binary_string[k]==true){
			counter++;
		}
	}
	return counter;
}

int main(){
	std::size_t capacity;
	std::cin>>capacity;
	bool vector[]={1,1,0,0,1};

	std::cout<<ones(vector,capacity);



}
