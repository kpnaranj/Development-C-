//============================================================================
// Name        : Numero.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

unsigned int g(unsigned int l){
	unsigned int i{0};
	unsigned int j{0};
	unsigned int k{0};

	while (i<l){
		while (j<l){

			if (j%3==0){

			i=i-1; j=j+1;

			break;
			}

			if (j%5==0){

			i=i-1; j=j-1;
			break;

			}
		k+=j;
		++j;
	}
	++i;
}

	return k;
}

int main(){
	int x=1;
	while (x!=0){

	std::cin>>x;
	std::cout<<g(x);
	}
}



