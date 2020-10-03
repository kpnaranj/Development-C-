//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>


int main() {
	int a,n, counter=0;
	bool find=true;
	srand(time(NULL));
	n= 1+rand()%(100);

	do {
	std::cout<<"Print a number "; std::cin>>a;

	if (a>n){
		std::cout<<"The number n is lower "<<std::endl;
	}

	if (a<n){
		std::cout<<"The number n is higher "<<std::endl;
	}

	if (a==n){
		find=false;
	}

	if (counter==4){

		find=false;
	}
	counter++;

	}while (find==true);

	if (counter>=4){
		std::cout<<"You lost, the number is "<<n;

	}
	else {
	std::cout<<"You win";
	}
}
