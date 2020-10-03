//============================================================================
// Name        : enter.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

	void memory(double z, double h){
		std::cout<<z<<h<<std::endl;

	}// To safe memory
	void calculador (double x, double y){
		if (x<y){
			std::cout<<x<<y<<std::endl;
		}

		else {
			x=0;
			y=0;
			std::cout<<"--"<<std::endl;
		}

	}

	int main(){
		double x,y,z,h;

		bool c=true;
		while (c==true){
		std::cin>>x>>y;
				if (x>y){
						z=x;
						h=y;
						memory(z,h);
						}
				else {
					calculador(x,y);
			}

		}
	}






