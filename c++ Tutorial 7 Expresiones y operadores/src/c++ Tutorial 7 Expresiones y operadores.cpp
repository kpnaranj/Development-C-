//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	double a,b,c,d,e,f,result=0,result1=0;

	std::cout<<"enter values";
	std::cin>>a>>b>>c>>d>>e>>f;



	result=(a+(b/c))/(d+(e/f));
	result1=a+(b/(c-d));
	std::cout.precision(2);

	std::cout<<"The values are:"<<result<<" and "<<result1<<std::endl;
	return 0;

}
