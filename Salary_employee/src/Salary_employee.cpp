//============================================================================
// Name        : Salary_employee.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/*
 * check dalary of an employee (input from user), if the salary is
 * less than 1500;
 * Hours rent=10% basic salary
 * Daily living=90%
 * for else
 * house rent 500;
 * Daily living=98%;
 */

int main() {
	double salary;
	std::cin>>salary;
	double hra;
	double dla;
	if (salary<1500){
		hra=(0.1)*salary;
		dla=(0.9)*salary;
	}
	else {
		hra=500;
		dla=salary*(0.98);
	}
	std::cout<<"the total expenses for house are "<<hra<<" and "<<dla<<" respectively"<<std::endl;

	return 0;

}
