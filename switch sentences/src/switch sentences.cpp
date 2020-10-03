//============================================================================
// Name        : switch.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
/*
	 *  switch (expresion){
	 *  case literal1:
	 *  {set of instructions;
	 *  break;}
	 *  case literal2:
	 *  {set of instructions;
	 *  break;
	 * 	default:
	 * 	in case it does not work out as expected
	 */


int main() {
	int numero;

	std::cout<<"Digite un numero entre 1 y 5 ";
	std::cin>>numero;

	switch (numero){
	case 1: std::cout<<"Es el numero 1"; break;
	case 2: std::cout<<"Es el numero 2"; break;
	case 3: std::cout<<"Es el numero 3"; break;
	case 4: std::cout<<"Es el numero 4"; break;
	case 5: std::cout<<"Es el numero 5"; break;
	default: std::cout<<"Es el numero no esta en rango"; break;
	}



}
