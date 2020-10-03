//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>


int main() {
 double a,b,c,equation, result1=0, result2=0;

    std::cin>>a>>b>>c;

    equation=std::sqrt(std::pow(b,2)-4*a*c);
    result1=(-b+equation)/(2*a);
    result2=(-b-equation)/(2*a);

    std::cout.precision(2);

    std::cout<<"The roots of the equation are: "<<result1<<" and "<<result2<<std::endl;

    return 0;


}
