//============================================================================
// Name        : ounteros.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

/*
 * &n = La direccion de n; este es el espacio
 * que hemos tomado en la memoria  // entero hexaheximal
 * *n = La variable cuya direccion esta almacenada en n
 * *n binary
 *
 *
 */

int main(){
	int num;
	int *p_num;// para direcciones

	num=20;

	p_num= &num;

	// podemos almacenar la direccion
	// podemos imprimir la direccion y el lugar


	std::cout<<*p_num<<std::endl;
	std::cout<<p_num;



}
