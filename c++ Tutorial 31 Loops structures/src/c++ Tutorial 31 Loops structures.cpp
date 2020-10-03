//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	int x,y, result=1;

	std::cin>>x>>y;

	for (int i=1;i<=y;i++){
	/* When we add the function inside it will
	 * return the values again for itself
	 * for example, if I add x*x=x2
	 * result=result*x o result= (result-1)*x
	 * result=1*x=x;
	 * result=x*x
	 * result=x*x*x;
	 * result=x*x*x*x; and so on return
	 * from the first value
	 *
	 */
					//x*x= 2
					//x*x*x=3// x*x*x*x=4;
		result*=x;



	}

		std::cout<<result<<std::endl;

	result=1;

	for (int i=2;i<=x;i++){
		/*1+2+3+4+5
		 * result=result+i but result goes first
		 * result=0+1
		 * result=result+i
		 * result=0+1=1	0+1+2+3=4
		 * result=1+2=3
		result=3+4=7 */

		result+=i;
	}

		std::cout<<result;

}
