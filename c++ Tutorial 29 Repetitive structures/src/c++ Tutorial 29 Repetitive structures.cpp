//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	int temperatura, promedio=0;
	double mayor=0, menor;

	for (int i=1; i<=24; i++){
		if (i%4==0){

			if (i<12){
			std::cout<<"compute the temperature of "<<i<<" am ";
			std::cin>>temperatura;

			}
			else if (i>=12&&i<=24){
			std::cout<<"compute the temperature of "<<i<<" pm ";
			std::cin>>temperatura;
			}
			promedio+=temperatura;
		}

		if (temperatura<menor){
			menor=temperatura;
		}

		if (temperatura>mayor){
			mayor=temperatura;
		}

	}

	promedio/=6;

	std::cout<<"Los valores son:"<<std::endl;
	std::cout<<"Temperatura mayor: "<<mayor<<std::endl;
	std::cout<<"Temperatura menor: "<<menor<<std::endl;
	std::cout<<"Promedio: "<<promedio;


}
