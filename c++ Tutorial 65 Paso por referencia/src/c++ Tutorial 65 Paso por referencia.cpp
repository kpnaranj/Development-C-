//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

void cambio(int x,int& y, int& z, int& a,
int& b, int& c, int& d);

void cambio(int x,int& y, int& z, int& a,
int& b, int& c, int& d){


	y=x/100;
	x%=100;
	z=x/50;
	x%=50;
	a=x/20;
	x%=20;
	b=x/10;
	x%=10;
	c=x/5;
	x%=5;
	d=x;

}


int main() {

	int dinero, cien, cincuenta,
	veinte, diez,cinco,uno;

	std::cin>>dinero;

	cambio(dinero, cien, cincuenta, veinte, diez, cinco, uno);

	std::cout<<"The exchange is "<<cien<<" "<<cincuenta
	<<" "<<veinte<<" "<<diez<<" "<<cinco<<" "<<uno<<
	" "<<"dolares";

}
