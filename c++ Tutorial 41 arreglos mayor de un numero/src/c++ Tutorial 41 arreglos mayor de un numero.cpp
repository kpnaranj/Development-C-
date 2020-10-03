//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arrays[100],n,maximum=0;
	std::cin>>n;
	for (int i=0; i<=n; i++){

		std::cin>>arrays[i];


	}

	int minor=arrays[0];

	for (int i=0; i<=n; i++){
		if (arrays[i]>maximum){
			maximum=arrays[i];
		}

		if (arrays[i]<minor){
			minor=arrays[i];
		}
	}

	std::cout<<maximum<<","<<minor<<std::endl;


}
