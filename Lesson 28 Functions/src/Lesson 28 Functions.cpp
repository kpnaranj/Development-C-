//============================================================================
// Name        : Lesson.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
int function (int n);
int function (int n){
	int result=1;
	for (int i=1;i<=n;i++){
		result*=i;
	}
	std::cout<<result<<std::endl;
	//Multiply all numbers and return the result
	return result;
}

int main(){
	int n;
	std::cin>>n;
	function(n);
}
