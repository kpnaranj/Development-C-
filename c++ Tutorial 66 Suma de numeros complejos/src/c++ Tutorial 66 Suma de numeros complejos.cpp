//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

struct complejo {
	double Re,Im;
}z1,z2;

void datos();
complejo sum (complejo, complejo);

/////////////////////////////////////////////

complejo sum(complejo z1, complejo z2){
	z1.Re+=z2.Re;
	z1.Im+=z2.Im;
	return z1;
}

////////////////////////////////////////////////

void datos(){
	std::cout<<"Print number 1: ";
	std::cin>>z1.Re>>z1.Im;
	std::cout<<z1.Re<<"+"<<z1.Im<<"i"<<std::endl;
	std::cout<<"Print number 2: ";
	std::cin>>z2.Re>>z2.Im;
	std::cout<<z2.Re<<"+"<<z2.Im<<"i"<<std::endl;
}

//////////////////////////////////////////////

void print(){
	if (z1.Im==0){
	std::cout<<z1.Re<<"+"<<"i"<<std::endl;
	}
	else {
	std::cout<<z1.Re<<"+"<<z1.Im<<"i"<<std::endl;
	}

}

int main(){
	datos();
	sum(z1,z2);
	print();

}
