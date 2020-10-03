//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/* Escribir un programa que lea un rpecio estandar y muestre el precio al aplicar IVA
 *
 */

int main() {
	double precio, iva, result=0;
	std::cout<<"digita el precio :";std::cin>>precio;
	iva=precio*0.13;
	result=precio+iva;
	std::cout<<"el IVA a pagar es: "<<result<<std::endl;
	return 0;

}
