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
	int a,b,c,d;

	std::cout<<"enter number";
	std::cin>>a>>b>>c;
	std::cout<<std::endl;
	std::cout<<"other value";
	std::cin>>d;

	if (d==a){
		std::cout<<"value match with first value";
	}
	else if (d==b){
		std::cout<<"value match with second value";
	}
	else if (d==c){
		std::cout<<"value match with third value";
		}
	else {
		std::cout<<"value does not match";
		}
	return 0;


}
