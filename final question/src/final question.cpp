//============================================================================
// Name        : final.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
struct shape_t
{
	double radius{},height{},base{}, lenght{},
	diagonal_p{}, diagonal_q{},area=0;


	double circle=std::pow(radius,2)*M_PI;
	double rectangle=base*lenght;
	double square=std::pow(lenght,2);
	double kite=(diagonal_p*diagonal_q)/2;
	double parallelogram=base*height;
	double rhombus=(diagonal_p*diagonal_q)/2;
	double trapezoid=((base*lenght)/2)*height;


	const double resulting_areas[7]={circle,rectangle,square,kite
	,parallelogram, rhombus, trapezoid};
};
struct area_t{

	struct shape_t;




	double area[8];

};
void area_shapes(shape_t,area_t, std::size_t capacity );

void area_shapes(shape_t variables,area_t areas, std::size_t capacity ){

	for (std::size_t k{0};k<capacity; k++){
		areas.area[k]=variables.resulting_areas[k];
	}

	for (std::size_t k{0};k<capacity; k++){

		std::cout<<areas.area[k]<<" ";
	}


}




int main() {

}
