//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	double a,b,c,d,result=0;

	std::cout<<"digite number 1:"; std::cin>>a;
	std::cout<<"digite number 2:"; std::cin>>b;
	std::cout<<"digite number 3:"; std::cin>>c;
	std::cout<<"digite number 4:"; std::cin>>d;

	result=(a+b)/(c+d);
	std::cout.precision(2);

	std::cout<<"The result is :"<<result<<std::endl;
	return 0;


}
