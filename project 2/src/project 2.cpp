//============================================================================
// Name        : project.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

struct poly_t
{
    double *a_coeffs;       // array of coefficients
    unsigned int degree;    // the degree of the polynomial
};
//////////////////////VALORES GLOBALES /////////////////////////////////////////////////
poly_t my_poly{nullptr, 0};
///////////////////////////DECLARACIONES//////////////////////////////////////////////
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


int main() {

	poly_t value;

	std::cout<<"Please add size: ";

	std::cin>>value.degree;

	value.a_coeffs=new double[value.degree];



	init_poly(my_poly,value.a_coeffs,value.degree);











}

///////////////////////DEINICIONES /////////////////////////////////////////


void init_poly( poly_t &p, double const init_coeffs[],
    unsigned int const init_degree ){








}













void destroy_poly( poly_t &p ){

}
unsigned int poly_degree( poly_t const &p ){
	return 0;
}
double poly_coeff ( poly_t const &p, unsigned int n ){
	return 0;
}
double poly_val( poly_t const &p, double x ){
	return 0;
}
void poly_add( poly_t &p, poly_t const &q ){

}
void poly_subtract( poly_t &p, poly_t const &q ){

}
void poly_multiply( poly_t &p, poly_t const &q ){

}
double poly_divide( poly_t &p, double r ){
	return 0;
}
void poly_diff( poly_t &p ){

}
double poly_approx_int( poly_t const &p, double a, double b, unsigned int n ){
	return 0;
}

