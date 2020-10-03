//============================================================================
// Name        : calculador.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

int main(){
	int a,b;
	char op;

	std::cout<<"enter values here";
	std::cin>>a;
	std::cin>>op;
	std::cin>>b;
	int result;
	if (op=='+'){
		result=a+b;
	}
	else if (op=='-'){
		result=a-b;
	}
	else if (op=='/'){
		result=a/b;
	}
	else if (op=='*'){
		result=a*b;
	}
	else {
		std::cout<<"invalid operator"<<std::endl;
	}
	std::cout<<result<<std::endl;
	return 0;
}
