//============================================================================
// Name        : Interation.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

int function (int x){
	int operation=1;
	for (int i=1;i<=x;++i){
		operation*=i;
		std::cout<<operation<<std::endl;
	}
	return operation;
}

int main (){
	int x;
	std::cin>>x;
	std::cout<<function(x)<<std::endl;
	return 0;
}
