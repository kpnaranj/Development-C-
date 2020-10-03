//============================================================================
// Name        : Recursion.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
//recursion is a function that calls itself
//we use functions to do that
//Base case using if statement
int factorial_right(int n){
	if (n==1){
		return 1;
	}
	else {
		return factorial_right(n-1)*n;
	}

//it will call the same function with different value
}
int main (){
	int n;
	std::cout<<"please insert value"<<std::endl;
	std::cin>>n;
	for (int i=1;i<=n;i++){

		std::cout<<factorial_right(i)<<std::endl;
	}
	return 0;
}
