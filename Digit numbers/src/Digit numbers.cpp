//============================================================================
// Name        : Digit.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/*
 * Write a program to find sum of the digits of given numbers
 */

int main() {
	int number{0};
	std::cin>>number;
	int division=number;
	int remainder;
	int result;
	while (division>0){
		remainder= division%10;
		result+=remainder;
		division=division/10;
	}

	std::cout<<result;

}
