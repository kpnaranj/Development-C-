//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	int n, result=1, sum=0;

	std::cin>>n;

	for (int i=1;i<=n; i++){

		result*=2;
		sum+=result;
		/*
		 *For multiplication the value will be 1
		 *For sum the value will be 0
		 *we can add valuies one at a time
		 */


		std::cout<<i<<"="<<result<<"="<<sum<<std::endl;
	}


}
