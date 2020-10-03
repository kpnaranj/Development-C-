//============================================================================
// Name        : Capitallowercase.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * Write a program that calculates the sum of the first 100 natural number
 * f(x)=x+y;
 */

#include <iostream>

int main(){
	int numbers;
	numbers=0;
	int sum;
	while (numbers<=100){
	sum+=numbers;
	numbers++;
	}
	std::cout<<sum<<std::endl;

}

