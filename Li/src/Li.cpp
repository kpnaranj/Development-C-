//============================================================================
// Name        : Li.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

#define POLYNOMIAL_H

struct poly_t
{
    double *a_coeffs;       // array of coefficients
    unsigned int degree;    // the degree of the polynomial
};

//////////////////////////////////////////////////
void init_poly( poly_t &p, double const init_coeffs[],
    unsigned int const init_degree );
void destroy_poly( poly_t &p );
unsigned int poly_degree( poly_t const &p );
double poly_coeff ( poly_t const &p, unsigned int n );
double poly_val( poly_t const &p, double x );
void poly_add( poly_t &p, poly_t const &q );
void poly_subtract( poly_t &p, poly_t const &q );
void poly_multiply( poly_t &p, poly_t const &q );
double poly_divide( poly_t &p, double r );
void poly_diff( poly_t &p );
double poly_approx_int( poly_t const &p, double a, double b, unsigned int n );
////////////////////////////////////////////////////


int main(){

	poly_t values{nullptr,0};
	unsigned int const capacity{0};
	double data[capacity];


	init_poly(values,data,capacity);


}
//////////////////////////////////////////////


void init_poly( poly_t &p, double const init_coeffs[],
    unsigned int const init_degree ){

	unsigned int ini_poly;

	std::cin>>ini_poly;

	p.degree=ini_poly;

	std::cout<<p.degree;


}
