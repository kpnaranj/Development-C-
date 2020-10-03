//============================================================================
// Name        : sxsxs.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

struct f_polyn
{
    double *coeffs;
    unsigned int degree;
};

f_polyn initial{nullptr,0};
void init_poly (f_polyn &p, double const init_coeffs[],
		unsigned int const init_degree);

int main(){

	f_polyn value;

	std::cout<<"Assigned size: ";

	std::cin>>value.degree;

	value.coeffs=new double[value.degree];

	for (unsigned int i=0; i<value.degree; i++){

		std::cout<<"Please enter polinomial of degree "<<i+1<<" ";

		std::cin>>value.coeffs[i];
	}
	init_poly(initial,value.coeffs,value.degree);

}


void init_poly( f_polyn &p, double const init_coeffs[],
    unsigned int const init_degree ){


	if (p.coeffs!=nullptr){

		destroy_poly(p);

	}


	p.coeffs=new double [init_degree];

	try {
		for (unsigned int i=0; i<init_degree; i++){

			p.coeffs[i]=init_coeffs[i];

			std::cout<<*(p.coeffs+i)<<" ";

		}


	}
	catch (...){

		std::cout<<"invalid output";

	}

}

void destroy_poly(f_polyn &p){

	delete[] p.coeffs;

	p.coeffs=nullptr;

	p.degree=0;

}

unsigned int poly_degree( f_polyn const &p ){

	unsigned int r_degree=0;




	return r_degree;
}

