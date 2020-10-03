//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

/*1+0=1
 * 1+1=2
 *
 * 1+1=2
 * 2+1=3  respuesta=respuesta+ respuesta anterior
 * 3+2=5
 * 5+3=8
 */

	int n,x=0,y=1,z=0;
	std::cin>>n;
	std::cout<<"1"<<" ";
	for (int i=1;i<=n;i++){

		z=x+y;// Valor respuesta= respuesta-1+respuesta-2;
		std::cout<<z<<" ";
		x=y;
		y=z;

		//This is how you store memory short term
		//memory long term
	}



}
