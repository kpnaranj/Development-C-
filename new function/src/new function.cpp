//============================================================================
// Name        : new.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

///////////////Second approach//////////////////////
#include <iostream>
#include <cmath>

struct shape_t{

	double radius{},height{},base{}, lenght{},
	diagonal_p{}, diagonal_q{},area=0;


	double circle=std::pow(radius,2)*M_PI;
	double rectangle=base*lenght;
	double square=std::pow(lenght,2);
	double kite=(diagonal_p*diagonal_q)/2;
	double parallelogram=base*height;
	double rhombus=(diagonal_p*diagonal_q)/2;
	double trapezoid=((base*lenght)/2)*height;

};

struct area_t{

	struct shape_t;

};

area_t area(shape_t& shape){

	area_t r_area;

	return r_area;
}

int main(){

}


