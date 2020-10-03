//============================================================================
// Name        : If.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
struct v{
		double a,b,c,d;
	};
void ms(double& x, double& y){
	std::cout<<x<<y<<std::endl;
}
int main (){
	double x,y;
	bool c=true;
	std::string commands{};
	std::cin>>commands>>x>>y;
	do {
		std::cout<<"enter:"<<std::endl;
		if (commands=="enter"){

			ms(x,y);

			if (commands=="negate"){
					v negate;
					negate.a=-x;
					negate.b=-y;
					x=negate.a;
					y=negate.b;

					ms(x,y);

				}

		}

	}
	while (c==true);

}
