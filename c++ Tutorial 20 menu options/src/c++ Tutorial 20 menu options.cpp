//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double a, result=0;
	int b;
	std::cin>>a;

	if (a==1){
		std::cin>>b;
		result=b*b;
		std::cout<<result;
	}

	else if (a==2){
		std::cin>>b;

		if (b%2==0){
		std::cout<<"Number is par";

		}
		else {
		std::cout<<"Number is inpar";
		}
	}

	else if (a==3){
		return 0;
		}



	}







