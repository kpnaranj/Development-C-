//============================================================================
// Name        : For.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//We can use this stament to complement with number
int function(int base, int num_power){
	int result=1;
	for (int i=0;i<=num_power;i++){
		result=result*base;
	}
	return result;
}

int main() {
	std::cout<<function(100,2)<<std::endl;

	return 0;
}
