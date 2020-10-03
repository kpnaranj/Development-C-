//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>

int main() {
	int a,b,c;

	std::cin>>a>>b>>c;

	if (a>b&&a>c){
		std::cout<<"The number "<<a<<" is the greatest number";
	}

	else if (b>a&&b>c){
		std::cout<<"The number "<<b<<" is the greatest number";
	}

	else {
		std::cout<<"The number "<<c<<" is the greatest number";
	}
}
