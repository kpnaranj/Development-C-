//============================================================================
// Name        : Final.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

class Box{
private:
	double length,width,height;
public:

	Box(double length,double width, double heigth);
	~Box();
	double area();
	double volume();
	bool compare_area(Box new_value);
	bool compare_volume(Box new_value);

};

Box::Box(double length,double width, double heigth){

	if (length>0&&width>0&&height>0){

		this->length=length;
		this->height=height;
		this->width=width;

	}

	else {
		throw -1;
	}
}

double Box::area(){

	double result=2*length*width+2*width*height+2*height*length;

	return result;

}

double Box::volume(){

	double result=length*height*width;

	return result;

}

int main(){


}
