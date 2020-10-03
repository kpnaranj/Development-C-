//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	double a,b,ax,bx;
	std::cout<<"Please give numbers to change";
	std::cin>>a>>b;
	ax=a;
	bx=b;
	b=ax;
	a=bx;
	std::cout<<"numbers are: "<<a<<" "<<b<<std::endl;
	// So far what I was doing you can use three variables
	int x,y,aux;
	std::cin>>x>>y;
	aux=x; // This means aux has the value of 10;
	x=y;// This means x change his value for y
	y=aux;// value of y is x
	std::cout<<"numbers are: "<<x<<", "<<y<<std::endl;

}
