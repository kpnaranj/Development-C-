//============================================================================
// Name        : switch.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char grade='D';
	switch (grade){
	case 'A':
		std::cout<<"excelent"<<std::endl;
		break;

	case 'B':
			std::cout<<"Well done"<<std::endl;
			break;

	case 'C':
			std::cout<<"nice"<<std::endl;
			break;

	case 'D':
			std::cout<<"Try again"<<std::endl;
			break;
	default :
		std::cout<<"your grade is"<<grade<<std::endl;
	}
}
