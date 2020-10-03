//============================================================================
// Name        : gorillas.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cmath>

double gravity();
double horizontal_velocity (double launch_velocity, double launch_angle);
double vertical_velocity(double launch_velocity, double launch_angle);
double computed_range(double launch_velocity, double launch_angle, double height);

double gravity(){
	return 9.80665;
}
double horizontal_velocity (double launch_velocity, double launch_angle){
double horizontal_velocity= launch_velocity*std::cos(M_PI/180*launch_angle);
return horizontal_velocity;}
double vertical_velocity(double launch_velocity, double launch_angle){

double vertical_velocity= launch_velocity*std::sin(M_PI/180*launch_angle);
return vertical_velocity;
}// Vertical part of the problem
double computed_range(double launch_velocity, double launch_angle, double height){
double computed_range=horizontal_velocity(launch_velocity, launch_angle)/gravity()*(vertical_velocity(launch_velocity, launch_angle)+std::sqrt(vertical_velocity(launch_velocity, launch_angle)*vertical_velocity(launch_velocity, launch_angle)+2*gravity()*height));
return computed_range;
}

#ifndef MARMOSET_TESTING

int main ();

#endif

#ifndef MARMOSET_TESTING

int main (){
double launch_velocity=600;
double x1=1;
double x2=2;
double x255=2.55;
double x3=3;
double x4=4;
double x5=5;
double x555=5.55;
double x6=6;
double x7=7;
double x755=7.55;
double x8=8;
double x9=9;
double launch_angle=10;
double height=10;

 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x1<<" degrees is "<<computed_range(launch_velocity, launch_angle*x1, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x2<<" degrees is "<<computed_range(launch_velocity, launch_angle*x2, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x255<<" degrees is "<<computed_range(launch_velocity, launch_angle*x255, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x3<<" degrees is "<<computed_range(launch_velocity, launch_angle*x3, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x4<<" degrees is "<<computed_range(launch_velocity, launch_angle*x4, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x5<<" degrees is "<<computed_range(launch_velocity, launch_angle*5, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x555<<" degrees is "<<computed_range(launch_velocity, launch_angle*x555, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x6<<" degrees is "<<computed_range(launch_velocity, launch_angle*x6, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x7<<" degrees is "<<computed_range(launch_velocity, launch_angle*x7, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x755<<" degrees is "<<computed_range(launch_velocity, launch_angle*x755, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x8<<" degrees is "<<computed_range(launch_velocity, launch_angle*x8, height)<<std::endl;
 std::cout<<"The range the banana reaches for the launch angle of "<<launch_angle*x9<<" degrees is "<<computed_range(launch_velocity, launch_angle*x9, height)<<std::endl;
 return 0;
}

#endif

