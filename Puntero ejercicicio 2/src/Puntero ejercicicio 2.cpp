//============================================================================
// Name        : Puntero.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
// Determinar si un numero es primo


int main(){
	int numeros[]{1,2,3,4,5};

	int *p_numero;

	// mucho codigo, pero es mejor

	p_numero = numeros;// aqui ya esta la direccion
	// y los registros

	for (int i=0;i<5;i++){
		std::cout<<"Elementos de vector"<<"["<<i<<"]";
		std::cout<<*p_numero++<<" "<<p_numero++<<std::endl;
	}

}
