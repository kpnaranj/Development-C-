//============================================================================
// Name        : Project.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

//////////////DECLARATION/////////////////////////////////


////////////////DEFITION//////////////////////

struct poly_t {

	double *a_coeffs;
	unsigned int degree;

};

//////////////INITIAL FUNCTION/////////////////////////////////////

poly_t my_poly{nullptr, 0};
double const initial_my_poly{};
bool poly_running=false;
int const initial{0};

////////////////////DEFINITION////////////////////////////
void ini_structure(poly_t &p, double const initial_coeffs[],
	unsigned int const init_degree){

	std::cout<<"Please add degrees :"<<std::endl;

	std::cin>>init_degree;

	p.degree=init_degree;

	initial_coefficients[p.degree];

	std::cout<<"Please enter initial values: ";


		for (int i{0}; i<p.degree; i++){

		std::cin>>initial_coefficients[i];

		}

	p.a_coeffs=new double [p.degree];

	p.a_coeffs=initial_coefficients;

}

////////////////////////////////////////////////////////


int main(){
	while (poly_running==false){
		ini_structure(my_poly, initial_my_poly,initial );
	}

}
