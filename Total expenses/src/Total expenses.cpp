//============================================================================
// Name        : Total.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/*
 * Add a number total expenses, input quantity, price and offer 25% if expenses more than 3000
 */

int main() {
	int quantity,price;
	std::cin>>quantity>>price;
	double result;
	result=quantity*price;
	if (result>3000){
		result=result*(0.75);// Use value double when you re performing values
		std::cout<<"we can give you "<<result<<" for this product"<<std::endl;
	}
	else
	std::cout<<"the price is "<<result<<std::endl;
}
