//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
	double n;
	int m;

	void datos();
	void faction(double& x);


	void datos(){
	std::cin>>n;
	}

	void faction(double& x){
		double result=0;
		m=x;
		result=x-m;
		x=8;

		std::cout<<result;
	}

int main() {
	datos();
	faction(n);
	std::cout<<n<<std::endl;



}
