//============================================================================
// Name        : C++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
double a;
void datos_function();

void al_cuadrado(double x);

void datos_function(){
	std::cin>>a;
}

void al_cuadrado(double x){

	double result=1;
	result=x*x;

	std::cout<<result<<std::endl;

}

int main() {

	datos_function();

	al_cuadrado(a);

	return 0;


}
