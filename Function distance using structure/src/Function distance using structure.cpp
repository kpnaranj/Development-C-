//============================================================================
// Name        : Function.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>


struct point_t{
	int x;
	int y;
};

double distance( point_t u, point_t v );
double distance( point_t u, point_t v ){


	double d=std::pow((v.x-u.x),2)+std::pow((v.y-u.x),2);
	double d_uv=std::sqrt(d);





	return d_uv;
}

int main() {
	}
