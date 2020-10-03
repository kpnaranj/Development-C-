//============================================================================
// Name        : leapYear.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#ifndef MARMOSET_TESTING
int main();
#endif

bool is_leap_year(int year);
bool is_leap_year(int year){

	if (year<1582){
		return false;
	}

	else if (year>=1582&&year%400==0){
		return true;
	}
	else if (year%4==0){

		if (year%100==0){
		return false;
		}
		else
		return true;
	}

	else
	return false;
}

#ifndef MARMOSET_TESTING
int main(){
	int year;
	std::cout<<"Please enter a year."<<std::endl;
	std::cin>>year;
	is_leap_year(year);

	if (is_leap_year(year)==true){
		std::cout<<year<<" is a leap year!"<<std::endl;
	}
	else {
		std::cout<<year<<" is not a leap year!"<<std::endl;
	}
	return 0;
}
#endif
