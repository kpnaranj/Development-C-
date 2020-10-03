//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	int matriz[2][2];

	for (int i=0; i<2; i++){

		for (int j=0; j<2; j++){
		std::cout<<"["<<i<<", "<<j<<"]"<<std::endl;
			std::cin>>matriz[i][j];
		}
	}

	for (int i=0; i<2; i++){
			for (int j=0; j<2; j++){
			std::cout<<"["<<matriz[i][j]<<"]"<<" ";

			}
		}

}
