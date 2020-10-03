//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	int a,b;
	std::cout<<"Write two numbers:";std::cin>>a>>b;

	if (a>b){
		std::cout<<"The number "<<a<<" is greater than "<<b<<std::endl;
	}
	else if (a<b){
		std::cout<<"The number "<<b<<" is greater than "<<a<<std::endl;
	}
	else {
		std::cout<<"The number "<<a<<" is the same as "<<b<<std::endl;
	}
	 return 0;
}
