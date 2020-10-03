//============================================================================
// Name        : Project.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

void commands_operators(std::string commands);

void commands_operators(std::string commands){
	double a,b;
		std::cin>>a>>b;
	if (commands=="enter"){

		if (a>b){
		std::cout<<"Error invalid intervals as "<<a<<">"<<b<<std::endl;

		}

		else {

		std::cout<<"["<<a<<", "<<b<<"]"<<std::endl;
		}

	}

}

int main(){

	bool is_working=true;


	std::string commands {};

	while (is_working==true){

		std::cout<<"input :> ";

		std::cin>>commands;

		if (commands=="exit"){

		std::cout<<"Bye bye: Terminating interval calculator program."<<std::endl;

		is_working=false;
		}

		void commands_operations(std::string commands);

	}
}
