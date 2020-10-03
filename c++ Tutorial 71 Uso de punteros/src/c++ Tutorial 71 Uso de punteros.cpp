//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	int numero,*p_numero;

	std::cin>>numero;

	p_numero= &numero;

	if (*p_numero%2==0){

		std::cout<<"The number "<<*p_numero<<"is par ";
		std::cout<<" Memory stored "<<p_numero;

	}

	else {

		std::cout<<"The number "<<*p_numero<<" is inpar ";
		std::cout<<" Memory stored "<<p_numero;

	}
}
