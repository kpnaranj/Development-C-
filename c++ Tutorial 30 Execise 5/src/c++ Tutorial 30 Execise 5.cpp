//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/*
 * Valores enteros hasta introducir [20,30] o 0; entregar suma de valores
 */

int main() {
	///////////////////////////////////////////
	int a,result=0;

	do {
	std::cin>>a;
		if (a>0){
		result+=a;
		}

	}while ((a<20||a>30)&&a!=0);

	std::cout<<result<<std::endl;
	///////////////////////////////////////////

}
