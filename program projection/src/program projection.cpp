//============================================================================
// Name        : program.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/*
 * numeration numbers
 */

int main() {

	////////////////////////////// Fist line
	/**/ for (int i=1;i<=4;i++){
			for (int j=1;j<=10;j++){
				std::cout<<"*";
			}
		std::cout<<std::endl;
	}
	///////////////////////////////////////
		std::cout<<" "<<std::endl;
	//////////////////////////////Second line
		for (int i=1;i<=5;i++){
			for (int j=1;j<=i;j++){
				std::cout<<"*";
			}
			std::cout<<std::endl;
		}
	/////////////////////////////////////////
		std::cout<<" "<<std::endl;
	////////////////////////////////Third line

	for (int i=1;i<=5;i++){

			for (int k=5;k>i;k--){
				std::cout<<" ";
			}

			for (int j=1;j<=i;j++){
				std::cout<<"*";
			}
			std::cout<<std::endl;
		}
	//////////////////////////////////////
	std::cout<<" "<<std::endl;
	///////////////////////////////Fourth line

	for (int i=1;i<=5;i++){
		for (int k=5;k>=i;k--){
			std::cout<<" ";
		}
		for (int j=1;j<2*i;j++){
			std::cout<<"*";
		}
		std::cout<<std::endl;
	}
	////////////////////////////////////////
	std::cout<<" "<<std::endl;
	//////////////////////////////////Fifth line

	for (int i=1;i<=5;i++){
			for (int k=5;k>=i;k--){
				std::cout<<" ";
			}
			for (int j=1;j<2*i;j++){
				std::cout<<i;
			}
			std::cout<<std::endl;
		}
	///////////////////////////////////////
	std::cout<<" "<<std::endl;
	//////////////////////////////////Last line
	for (int i=1;i<=5;i++){
				for (int k=5;k>=i;k--){
					std::cout<<" ";
				}
				for (int j=i;j>=1;j--){
					std::cout<<j;
				}

				for (int l=2;l<=i;l++){
				std::cout<<l;
				}
				std::cout<<std::endl;
			}

	return 0;
	}

