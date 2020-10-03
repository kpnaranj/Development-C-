//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
// tabla del 1-10 con tabla de multiplicar

int main() {
	int a, table=0;
	std::cin>>a;

	if (a>0&&a<11){
		for (int i=0;i<=20;i++){
			table=a*i;
			std::cout<<a<<"*"<<i<<"="<<table<<std::endl;
		}
	std::cout<<std::endl;
	}
	else {
	std::cout<<"No in range 1-10";
	}


	return 0;
}
