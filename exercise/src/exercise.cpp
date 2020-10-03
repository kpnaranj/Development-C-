//============================================================================
// Name        : exercise.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//===========================================================================

#include <iostream>
#include <cmath>


struct point_t{
	double x;
	double y;
};


double distance( point_t u, point_t v );
double distance( point_t u, point_t v ){


	double d=std::pow((v.x-u.x),2)+std::pow((v.y-u.x),2);
	double d_uv=std::sqrt(d);

	return d_uv;
}

int main(){

	point_t value1;
	value1.x=-2;
	value1.y=3;

	point_t value2;

	value2.x=3;
	value2.y=3;


	distance(value1,value2);



	std::cout<<distance(value1,value2);



}
