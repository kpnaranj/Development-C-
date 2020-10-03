//============================================================================
// Name        : tutorial.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

/*
 * &n es la direccion de n
 * *n es la variable con direccion n
 */


int main(){

	int num, *p_num;

	num=20;// de un valor ya iniciado

	p_num=&num;// a donde quiero apuntar







	std::cout<<"Numero"<<*p_num<<std::endl;
	std::cout<<"Direccion de n"<<p_num<<std::endl;

}
