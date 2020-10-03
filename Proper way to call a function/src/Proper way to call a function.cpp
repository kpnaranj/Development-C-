//============================================================================
// Name        : Proper.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

//Create a fucntion and declare it
int function (int a, int b){
// Add a value different than our function
	int answer;
	answer=a+b;
	return answer;
}

int main (){
	//Add another value
	double response;
	//in our third function add values
	response= function(1,2);
	std::cout<<response<<std::endl;
	return 0;
}

