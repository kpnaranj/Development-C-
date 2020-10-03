//============================================================================
// Name        : Number_of_y,m,d.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/*Progra, that accepts days integers
 * display total number of years, months and days
 */
int main() {
	int days,years,months,d;
	std::cout<<"enter number of days";
	std::cin>>days;

	years=days/365;
	days=days%365; //days will change
	months=days/30;
	d=days%30;



	std::cout<<"the value is : "<<years<<" "<<months<<"  "<<d<<std::endl;
	return 0;
}
