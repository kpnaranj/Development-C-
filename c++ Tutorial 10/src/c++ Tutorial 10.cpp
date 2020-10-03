//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main() {
	double a,b,c,d=100,result=0;
// My result
	std::cout<<"Escribe tus notas: "<<std::endl;
	std::cout<<"nota practica ";std::cin>>a;
	std::cout<<"nota teorica ";std::cin>>b;
	std::cout<<"nota participacion ";std::cin>>c;

	result=((a/10*d)*0.3)+((b/10*d)*0.6)+((c/10*d)*0.1);

	std::cout<<"Your result is: "<<result<<std::endl;

	result=(a*0.3)+(b*0.6)+(c*0.1);

	std::cout<<"Your result is: "<<result<<std::endl;
	// His way of doing it
	a*=0.3;
	b*=0.6;
	c*=0.1;

	result=a+b+c;

	std::cout<<"Your result is: "<<result<<std::endl;


	return 0;
}
