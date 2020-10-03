//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

/*
 * While primero piensa, luego actua;
 * do while primero actua, luego piensa
 *
 * do{
 * 	conjunto de instrucciones
 * 	}// esto quiero que se ejecutrw al menos una vez
 *
 * 	while (expresion logica)==> luego comprueba
 * 	si se cumple;
 */

int main() {

	int i;

	i=12;

	do{
		std::cout<<i<<" "<<std::endl;
		i++;
	}while (i<=10);


}
