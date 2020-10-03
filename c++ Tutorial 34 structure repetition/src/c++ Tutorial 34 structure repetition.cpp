//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

// inverse values program  program

int main() {
	int n, result1=0, result2=0, sum;
	std::cin>>n;

	for (int i=1;i<=n;i++){

		if (i%2==0){
			result1+=-i;

		}
		else {
			result2+=i;
		}

		sum=result1+result2;

		std::cout<<"the sum is: "<<result1<<"+"
		<<result2<<"="<<sum<<std::endl;

	}


}
