//============================================================================
// Name        : recursion.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void calculator(double x, double y){
	if (x>=0&&y>=0){
		calculator(x-1,y-1);
		std::cout<<x<<y<<std::endl;
	}
}

int main(){
	double x;
	double y;
	std::cin>>x,y;
	calculator (x,y);
}


