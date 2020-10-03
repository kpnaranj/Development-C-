//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

// alumnos que aprobaron todos
// alumnos que probaron 1 examen
// Ultimo exmane


int main() {
	int a,b,c;
	double A=0, B=0, R=0;

	for (int i=1;i<=5; i++){

		std::cout<<"Persona"<<i<<"Nota examen 1: "; std::cin>>a;
		std::cout<<"Persona"<<i<<"Nota examen 2: "; std::cin>>b;
		std::cout<<"Persona"<<i<<"Nota examen 3: "; std::cin>>c;



		if (a>=10.5&&b>10.5&&c>=10){
			A++;
		}

		if(a>=10.5||b>=10.5||c>=10.5){
			B++;
		}

		if (a<=10.5&&b<=10.5&&c>=10.5){
			R++;
		}


	}
	std::cout<<"Notas "<<A<<B<<R<<std::endl;

}
