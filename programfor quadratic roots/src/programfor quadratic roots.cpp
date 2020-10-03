//============================================================================
// Name        : programfor.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
/*
 * find quadratic roots equation
 * a*x*x+b*x+c
 * a!=0;
 *
 */

int main() {
	int a,b,c;
	int result1;
	int result2;
	std::cin>>a>>b>>c;
	if (a!=0){
	int d=b*b-4*a*c;
		if (d==0){
			result1=-b/(2*a);
			result2=result1;
		}
		else if (d>0){
			result1=(-b+d)/(2*a);
			result2=(-b-d)/(2*a);
		}
		else {
			std::cout<<"result does not exist"<<std::endl;
		}
		std::cout<<"the results are "<<result1<<" and "<<result2<<std::endl;
	}
	else
		return 0;
}


