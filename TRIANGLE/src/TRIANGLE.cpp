//============================================================================
// Name        : TRIANGLE.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main(){
	int n;
	std::cin>>n;
	int number[100]{1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int basek[100];
	int result[100][100];
	for (int rows=0;rows<=n;rows++){
			number[0]=1;
			result[0][0]={1}{1};
		for (int col=0;col<=rows;col++){
			basek [0]=1;
			if (number[rows]==basek[col]||basek[0]){
				return 1;
			}

			else {
				result[rows][col]=result[rows-1][col-1]+result[rows-1][col];
				std::cout<<result[rows][col];
			}
		}
		std::cout<<std::endl;
	}
	return 0;
}
