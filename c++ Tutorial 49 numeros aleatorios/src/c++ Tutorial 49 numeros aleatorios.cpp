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

int matriz_1[3][3],matrix_2[3][3],sum1[3][3], sum2[3][3], result[3][3];


	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){

			std::cout<<"For matrix 1 ["<<i+1<<", "<<j+1<<"]";std::cin>>matriz_1[i][j];

			std::cout<<"For matrix 2 ["<<i+1<<", "<<j+1<<"]";std::cin>>matrix_2[i][j];
		}
	}


	for (int i=0; i<3; i++){

			for (int j=0; j<3; j++){
				sum1[i][j]=(matriz_1[i][j]*matriz_1[j][i]);
				sum2[i][j]=(matrix_2[i][j]*matrix_2[j][i]);

			}

		}

	for (int i=0; i<3; i++){

				for (int j=0; j<3; j++){
					std::cout<<sum1[i][j]<<" ";

				}
				std::cout<<"||"<<"";

				for (int k=0; k<3; k++){
					std::cout<<sum2[i][k]<<" ";
				}
				std::cout<<std::endl;
			}


	std::cout<<std::endl;

	std::cout<<"La suma de valores es:";

	for (int i=0; i<3; i++){

				for (int j=0; j<3; j++){

				result[i][j]=sum1[i][j]+sum2[i][j];

				std::cout<<result[i][j]<<" ";
				}
				std::cout<<std::endl;

			}









}
