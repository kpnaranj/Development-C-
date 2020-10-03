//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
// hipotenusa
int main() {
	double a,b,result=0;

	std::cout<<"print cateto 1:"; std::cin>>a;
	std::cout<<"print cateto 2:"; std::cin>>b;



	result=std::sqrt(std::pow(a,2)+std::pow(b,2));

	result=(std::sqrt(a))/((std::pow(b,2))-1);




	std::cout<<result<<std::endl;

}
