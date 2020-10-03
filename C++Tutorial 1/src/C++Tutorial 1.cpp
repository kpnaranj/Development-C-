//============================================================================
// Name        : C++Tutorial.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x,y;
	int suma=0;
	int resta=0;
	int mult=0;
	int division=0;
	std::cout<<"digita un numero:";	std::cin>>x;
	std::cout<<"digita otro numero: "; std::cin>>y;

	suma=x+y;
	resta=x-y;
	mult=x*y;
	division=x/y;


	std::cout<<"\nla suma es :"<<suma<<std::endl;
	std::cout<<"la resta es: "<<resta<<std::endl;
	std::cout<<"la multiplicacion es: "<<mult<<std::endl;
	std::cout<<"la division es: "<<division<<std::endl;

}
