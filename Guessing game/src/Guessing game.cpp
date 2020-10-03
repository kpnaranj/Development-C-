//============================================================================
// Name        : Guessing.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
// Perfect method to get loops with values
// Try to add values completely different
int main (){
	int secret=7;
	int count=0;
	int limit=3;
	int guess;
	bool boundaries=true;
	//If we want to do it continue
	while(secret!=guess&&boundaries){
		if (count<limit){
		std::cout<<"enter guess"<<std::endl;
		std::cin>>guess;
		count++;
		}

		else {
			boundaries=false;

		}
	}
	if (!boundaries){
		std::cout<<"loser"<<std::endl;
	}
	else
		std::cout<<"you win"<<std::endl;

	return 0;
}

