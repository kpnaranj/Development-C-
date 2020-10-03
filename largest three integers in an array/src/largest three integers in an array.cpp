//============================================================================
// Name        : largest.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

struct three_ints_t{

	int max1=0,max2=0,max3=0;

};


three_ints_t largest_three( int data[], std::size_t capacity );


three_ints_t largest_three( int data[], std::size_t capacity ){

	three_ints_t value;

	for (std::size_t k{0}; k<capacity; k++){

		if (value.max1<data[k]){

		value.max3=value.max2;value.max2=value.max1;
		value.max1=data[k];

		}

		else if (value.max2<data[k]) {

		value.max3=value.max2; value.max2=data[k];

		}

		else if (value.max3<data[k]) {

		value.max3=data[k];

		}

	}


	return value;
}











int main(){

	std::size_t capacity=5;
	int vector [capacity]={5,8,9,0,5};

	largest_three(vector,capacity);

	three_ints_t x=largest_three(vector,capacity);

	std::cout<<x.max1<<x.max2<<x.max3;
}

