//============================================================================
// Name        : two.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

//This is matrix, there are computer applications
int main() {
	int arrays [3][2]{
			{1,2},
			{3,4},
			{5,6}
	};
	//The first loop is in charge of the inside elements [3]
	for (int i=0;i<3;i++){
	//Second loop is in charge of retaining additional information second elements
	//it changes name
		for (int j=0;j<2;j++){
		std::cout<<arrays[i][j];
		}
		std::cout<<std::endl;
	}

	return 0;
}
