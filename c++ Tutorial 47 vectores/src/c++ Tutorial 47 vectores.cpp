//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	int vector [3][3];




	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			std::cout<<"["<<i<<","<<j<<"]"<<std::endl;
			std::cin>>vector[i][j];
		}
	}


	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){

			if (i==j){
				std::cout<<vector[i][j]<<" ";
			}
			else {
				std::cout<<" ";
			}
		}
		std::cout<<std::endl;

	}

}
