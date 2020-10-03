//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

	int arrays[4], tam;
	void order();
	void checking(int v[]);
	void mostrar(int v[]);

//////// Order function//////

	void order(){

		for (int i=0; i<4; i++){

			std::cout<<i+1<<" Valor:";std::cin>>arrays[i];

		}
	}
///////////Comparison function////////


	void checking(int v[]){

		for (int i=0; i<4; i++){

		v[i]=-1*v[i];

		}
	}
///////////Mostrar datos///////////

	void mostrar(int v[]){

		for (int i=0; i<4; i++){

			std::cout<<v[i]<<" ";


			}
	}


//////Main Function///////////////
int main(){
	order();
	checking(arrays);// Careful with these parameters
	mostrar(arrays);

}
