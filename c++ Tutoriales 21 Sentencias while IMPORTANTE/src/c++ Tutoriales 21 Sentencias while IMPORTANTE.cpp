//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

/*
 * While (expresion logica){
 * conjunto de instrucciones, mientras siga siendo
 * cierto condiciones se cumpliran
 * }
 */

int main() {
	int i=100;


	while (i>=0){
		std::cout<<i<<" ";
		/*
		 * i=i+1;
		 * i+=1;
		 * i++;
		 */
		i--;
	}// la condicion sera falsa y saldra del bucle


}
