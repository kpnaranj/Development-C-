//============================================================================
// Name        : Binary.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int bin2dec( bool binary_string[16]);

int bin2dec( bool binary_string[16]){

	int decimal=1;// 10001011
	int sum=1;

	for (std::size_t k=1; k<16; k++){

			decimal*=2;

			if (binary_string[k]==true){

			sum+=decimal;

			}

	}



	return sum;
}

int main(){

	bool vector[16]={1,1,0,0,0,0,0,0,0,0,0,0,0};

	bin2dec(vector);

	std::cout<<bin2dec(vector);

}



