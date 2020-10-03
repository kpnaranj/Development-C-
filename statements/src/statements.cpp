//============================================================================
// Name        : statements.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int number1,number2;
	std::cout<<"first number "<<std::endl;
	std::cin>>number1;
	std::cout<<"second number "<<std::endl;
		std::cin>>number2;
	if (number1>number2){
		std::cout<<"Thanks"<<std::endl;
	}
	else {
		std::cout<<"nop, second number"<<std::endl;
	}
	return 0;
}
