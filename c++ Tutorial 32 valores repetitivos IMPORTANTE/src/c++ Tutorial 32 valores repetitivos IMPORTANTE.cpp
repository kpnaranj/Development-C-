//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	int n, result=0;
	std::cin>>n;
	//////////////////////////////
	for (int i=1; i<=n; i++){
	/*
	 * result=2*i-1;
	 *
	 * result=2*1-1=1
	 * result=result+2*2-1
	 *
	 */

	result+=2*i-1;

	std::cout<<i<<"="<<result<<std::endl;

	}

	std::cout<<result<<std::endl;
	//////////////////////////////////////
	result=0;
	std::cin>>n;

	for (int i=1;i<=(2*n-1);i+=2){
		result+=i;
	}

	std::cout<<result<<std::endl;


}
