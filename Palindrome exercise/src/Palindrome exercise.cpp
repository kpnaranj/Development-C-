//============================================================================
// Name        : Palindrome.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

bool palindrome( char data[], std::size_t capacity);



bool palindrome( char data[], std::size_t capacity){

	bool stament=true;

	for (std::size_t k=0; k<capacity; k++){

		if (data[(capacity-1)-k]!=data[k]){

			stament=false;

		}
	}

	return stament;

}

int main(){

	std::size_t k=9;
	char data[k]={"reconocer"};

	for (std::size_t i=0; i<k; i++){

		std::cout<<data[i];
	}

	if (palindrome (data,k)==true){
		std::cout<<"value is palindrome";
	}

	return 0;
}
