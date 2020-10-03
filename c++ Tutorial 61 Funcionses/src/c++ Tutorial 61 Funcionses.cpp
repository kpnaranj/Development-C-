//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
	int n,m;// Valores generales

	void datos();// Funciones que la funcion
	void funpot(int x,int y);

	void datos(){
		std::cin>>n>>m;
	}

	void funpot(int x, int y){

		int result=1;

		for (int i=1; i<=y; i++){

			result*=x;

		}

		std::cout<<result;
	}


int main() {
	datos();
	funpot(n,m);
}
