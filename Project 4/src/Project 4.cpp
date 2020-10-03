//============================================================================
// Name        : Project.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

//declare a class

class Point{

	// ATRIBUTOS

private:

	// What they all have in common
	int x,y;

	// final results

	// Their outcomes

public:

	// Los valores qur tengan
	// Point quiero pasar a
	// estas funciones

	Point(int _x, int _y){ // constructor 1

		x=_x;
		y=_y;

	}

	Point(){ // constructor 2

		x=y=0;

	}

	void setX(int valorX); // Establecer el valor x

	void setY(int valorY); //Establecer el valor y

	int getx(); // Obtener x

	int gety(); // obtener el valor de y

};

void Point::setX(int valorX){

	x=valorX;

}

void Point:: setY(int valorY){

	y=valorY;

}

int Point::getx(){

	return x;

}

int Point::gety(){

	return y;

}


int main (){

	Point p1(2,1);
	Point p2(8,3);
	// creacion de un ojeto estatico
	int num;  // it has its own nomenclature

	std::cout<<"Value  x is "<<p1.getx()<<std::endl;
	std::cout<<"Value x2 is "<<p2.getx()<<std::endl;
	std::cout<<"Value  y is "<<p1.gety()<<std::endl;

	Point* p3=new Point();

	p3->setX(5);
	p3->setY(8);

	std::cout<<"El valor de x es "<<p3->getx();

}





// Objects have specific properties
// Size, colour, shape, texture
// They have charactersitics that make them unique

// example, car can be: color, brand, km
//  actions:  on increase, accelerate
// atributes. Numerador, denominador
// combination: sum, subtartc

//A class is a set of objects that share the same structure
// and have same behaviour

//objects can have different strutures but same behaviour


// car
/*
 * Car
 * --------------
 * Different:
 * color
 * brand
 * km
 * ---------------
 * Same functions
 * on
 * accelerate
 * stop
 */





