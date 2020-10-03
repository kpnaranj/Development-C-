//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	int primo, *p_primo;

	std::cin>>primo;

	p_primo= &primo;


	int counter{0};

	for (int i=1; i<=*p_primo; i++){



		if (*p_primo%i==0){
			counter++;
		}
	}

	if (counter>2){
		std::cout<<*p_primo<<" is not prime "<<p_primo;

	}

	else {
		std::cout<<*p_primo<<" is prime "<<p_primo;
	}



}


