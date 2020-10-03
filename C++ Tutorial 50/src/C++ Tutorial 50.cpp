//============================================================================
// Name        : C++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>


int main() {
	srand(time(NULL));
	int n;
	int aux;
	int pos;

	int arrays[12];

	for (int i=0; i<12; i++ ){
		n=rand()%100+1;
		arrays[i]=n;
		std::cout<<arrays[i]<<" ";
	}

	// Metodo indirecto shell

	for (int i=1; i<=12; i++ ){

		for (int j=1; j<=12; j*=12/2){
			if (arrays[pos]>arrays[j]){
				aux=arrays[i-1];
				arrays[i-1]=arrays[j-1];
				arrays[j-1]=aux;

			}

		}


	}








}
