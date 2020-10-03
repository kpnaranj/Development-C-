//============================================================================
// Name        : Ejercicio2.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main(){



	//n%2 false
	/*
	 * n/2 regresa
	 *
	 * n%2 false
	 *
	 * n/2 regresa
	 *
	 * n%2  true
	 *
	 * (n-1)/2
	 *
	 *
	 *
	 */

	std::size_t capacity=0;

	std::cout<<"Please give a value: ";

	std::cin>>capacity;

	bool integers[capacity];

	std::size_t aux=capacity;

	for (std::size_t i=0;i<capacity; i++){

		integers[i]=false;

		std::cout<<integers[i]<<" ";

		}
	std::cout<<std::endl;

	while (aux>0){

		if (aux==1){
			integers[1]=true;
			aux=0;
		}

		else if (aux%2!=0){

			integers[aux]=true;

			aux=(aux-1)/2;

		}


		else {
			aux/=2;
		}
	}

	for (std::size_t i=capacity-1;i>0; i--){

			std::cout<<integers[0]<<integers[i]<<" ";

			}

}

	/*for (std::size_t k=capacity;k>=0; k/=2){

		if (k%2==0){

			integers[k-1]=false;
		}
		else if (k==1){
			integers[k]=true;

		}
		else {
			integers[k-1]=true;
			k--;
		}
	}// End of for statement

	for (std::size_t j=0;j<capacity; j++){

		std::cout<<	integers[j]<<" ";

		}// End of for statement

}*/
