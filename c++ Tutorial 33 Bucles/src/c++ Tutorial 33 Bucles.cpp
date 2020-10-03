//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, result=1, suma=0;
	std::cin>>n;

	for (int i=1; i<=n; i++){

		/*
		 * result=result*i
		 * result=1*1=1
		 * result=2*1=2
		 * result=3*2=6
		 * result=3*2*4=24
		 */
		// conceptos anteriores
		/*
		 * suma de factoriales,c on valores adiciona
		 * les, y en progreso
		 */
		result*=i;
		suma+=result;

		std::cout<<i<<"="<<result<<"="<<suma<<std::endl;


	}


}
