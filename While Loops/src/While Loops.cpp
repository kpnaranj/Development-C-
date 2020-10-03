//============================================================================
// Name        : While.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

int main (){
	int initial=1;
	int a,b;
	//specify a condition
	//as long as this condition is true I am continuing executing
	while (initial<=5){
		//by declaring a value we do not assign a real value
		//becomes a loop
		a=a+0;
		//value a will continue increasing
		b=1;
		initial=a+b;
		std::cout<<initial<<std::endl;
		a++;
		//initial condition is added
		//try to find a point when the condition is false
	}
	return 0;
}
