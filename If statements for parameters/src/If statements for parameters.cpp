//============================================================================
// Name        : If.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

int genial (int a, int b){
	int result;
	//add comparison
	if (a>b){
		result=a+b;
	}
	else if (a==b){
		result= a*b;
	}
	else {
		result=a-b;
	}
	return result;
}

int main (){
	int a,b;
	std::cin>>a>>b;
	int project;
	project=genial (a,b);
	std::cout<<project<<std::endl;
	return 0;
}
