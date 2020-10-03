//============================================================================
// Name        : pointers.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int data{99};

	int *p_data{nullptr};
	// p_data only stores adress, so only way to acess is &
	p_data= &data;// here I have the address of the pointer, takes data and storage in the function

	// O*1F22= 99 so, I send the address p_data= o*1f22 value, I want to cahnge data

	// open the access
	// if I add p_data error, because it is the address
	*p_data=45;

	std::cout<<data;


}
