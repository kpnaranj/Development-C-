//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	//primos 2,3,5,7,9
	// n+2
	// 20=4*5=2*2*5
	// 20/2=10*2
	//17= 17*1
	//60=30*2=15*2*2=3*5*2*2
	//56=28*2=14*2*2=7*2*2*2
	int num;
	std::cin>>num;
	for (int i=2; num>1; i++){
		while (num%i==0){
			num/=i;
			std::cout<<i<<" ";
		}
	}



}
