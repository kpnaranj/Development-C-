//============================================================================
// Name        : Exercise.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
/*
 * write a function power that takes two arguments, double for n, and int for p
 * return the result as double 2*2*2*2=8=2^4 where 4=p
 * pwill be 2;
 */

double power(double n, int p){
	double result=1;
	for (int i=1;i<=p;i++ ){

		result*=n;
	}
	return result;
}
int main() {
	double n;
	int p;
	std::cout<<"please enter values "<<std::endl;
	std::cin>>n>>p;
	power (n,p);
	std::cout<<power(n,p)<<std::endl;
}
