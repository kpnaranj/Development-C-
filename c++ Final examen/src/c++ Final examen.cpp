//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

double exam(double midterm,double final){

	double result=0;
	result=(3*midterm/8)+(5*final/8);
	return result;

}

double grade(double x, double p){

	double result=0;
	if (x>=60){
		result=(0.8*x)+(0.2*p);

	}
	else if(x<=60&&x>=40){
		result=((((-x)/100)+(7/5))*x)+(((x/100)-(2/5))*p);

	}
	else {

		result=x;
	}

	return result;

}

int main(){


std::cout<<exam(30,65)<<std::endl;

std::cout<<grade(exam(30,46),81.25);



}
