//============================================================================
// Name        : Midter,.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

void coin_machine(double money){

	money*=100;

	int change=money;

	int nickel{0},dime{0},quarter{0};

	for (int i=1; i<=change; i++){

		if (i%5==0){

			change/=25;
			quarter++;

		}

		else if (i%10==0){

			change/=10;
			dime++;

		}

		else if (i%25==0){

			change/=5;
			nickel++;

		}

		else {

			if (change>3){

				quarter++;
			}

			else {
				change=0;
			}
		}


		for (int k=1;k<=quarter; k++){

			std::cout<<25<<" ";

		}

		for (int j=1; j<=dime; j++){

			std::cout<<10<<" ";

		}

		for (int i=1;i<=nickel; i++){

			std::cout<<5<<" ";

		}

	}

}


int main(){

	double x=2.32;

	coin_machine(x);

}
