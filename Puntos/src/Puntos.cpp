//============================================================================
// Name        : Puntos.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	int k{0};

	bool s[5]{};

	while(k<100){

		std::cin>>k;

		for(unsigned int i=0; i<5; i++){

		if (i==k){

			s[i]=true;

			}


		}

		for(int i=0; i<5; i++){

		if(s[i]!=true){
			std::cout<<"...";
		}

		else{

			std::cout<<"*";
		}


			}

	}

}
