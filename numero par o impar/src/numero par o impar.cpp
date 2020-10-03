//============================================================================
// Name        : numero.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main(){
	int numero,* p_numero;

	std::cout<<"Numero: ";std::cin>>numero;

	p_numero= &numero;// Guardame la posicion de memoria

	if (*p_numero%2==0){
		std::cout<<"El numero"<<*p_numero<<" es par";
		std::cout<<"la posiion de memoria es "<<p_numero;

	}

	else {
		std::cout<<"El numero es impar";
		std::cout<<"la posiion de memoria es "<<p_numero;
	}


}
