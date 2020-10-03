//============================================================================
// Name        : Start_work.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
/* * Number of days from the leap year /If the year is before 1 CE, it is never a leap year.
If the year is 1582 or before, a year is a leap year if it is a multiple of four.
If the year is after 1582, a year is a leap year if it is a multiple of four,
unless it is a multiple of 100, in which case it is not, unless it is yet again a multiple of 400,
in which case it is.

Write a function to take an argument and determine whether or not it is .
Treat negative numbers as years BCE, and ignore the fact that technically 0 is not a year,
just return false.
*/

bool leap_Year(int year){

	if  (year<=1){
		return false;
	}

	else if ((year>1582 && ( year%4==0&&year%100!=0 ))&&year%400==0){
		std::cout<<"it is leap year"<<std::endl;
		}
	else if (year<1582&&year%4==0){
		std::cout<<"it is leap year"<<std::endl;
	}
	else {
		std::cout<<"it is not a leap year"<<std::endl;
		return false;
	}
	return true;
}

int main(){
	int year;
	std::cin>>year;
	leap_Year(year);

	return 0;
}
