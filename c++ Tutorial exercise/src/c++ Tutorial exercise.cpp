//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

void illegal_interval(double a, double b){

		double command=-1;
		try {
			if (a<b){
			std::cout<<"["<<a<<", "<<b<<"]"<<std::endl;
			}
		}
		catch (...){
			std::cout<<"Error: Illegal interval identified "<<std::endl;
			throw command;
		}



}

int main(){

	double x,y;

	std::cin>>x>>y;

	illegal_interval(x,y);

}
