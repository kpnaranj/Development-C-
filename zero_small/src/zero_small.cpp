//============================================================================
// Name        : zero_small.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>


int zero_small(int a, int b){
	int result=0;
	if (a<b){
		a=0;
	}
	else {
		b=0;
	}
	result=a+b;
	return result;
}
int main() {
	int a;
	int b;
	std::cin>>a>>b;

	zero_small (a,b);

	std::cout<<zero_small(a,b)<<std::endl;
	return 0;

}
