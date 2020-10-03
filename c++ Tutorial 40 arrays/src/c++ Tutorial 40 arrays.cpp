//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
// Vector is a type if date that is sstore in
// secuence of data
/*
 * Se almacena en zonas continuas
 * y se accede de manera directa con un indice
 * Para definir un vector
 *
 * int double [12];
 * types of arrays
 * luego se define los vectores dentro
 *
 * int numero[]={1,2,3,4,5};
 * number is stored automatically with the number
 *
 * suma de elementos de un vector con c++;
 * definir numero
 * valuores que deseo definir en otra casilla
 *
 *
 */

int main() {
	int numero[5]={1,2,3,4,5};
	int suma=0, multiplication=1;

	for (int i=0; i<=5; i++){
		suma+=numero[i];
	std::cout<<"suma "<<i<<"="<<suma<<std::endl;
		/*
		 * valores como indicativos
		 * suma=0+1=1
		 * suma=1+2=3
		 * suma=3+3=6
		 * Los valores estaran sobre los
		 * nuevos valores que se introduzcan
		 *
		 */
		multiplication*=numero[i];
		std::cout<<"Mult: "<<i<<"="<<multiplication<<std::endl;
	}

}
