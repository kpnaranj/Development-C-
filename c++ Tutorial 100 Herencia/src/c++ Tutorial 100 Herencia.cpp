//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
// como saber las herencias ***es un
/*escritoriio es un avion
 * triangulo es un objecto
 * obtienen todos los elementos qu posee mi clase
 *
 */

class Figura{
private:
	int nLados;
public:
	Figura(int nLados);
	int getLados();
};


Figura::Figura(int nLados){
	this->nLados=nLados;
}

int Figura::getLados(){
	return nLados;
}

class Triangle:public Figura{
private:
	double lado1,lado2,lado3;

public:
	Triangle(int nLados,double lado1,double lado2,double lado3);
	double area();
};

Triangle::Triangle(int nLados,double lado1, double lado2, double lado3):Figura(nLados){
	this->lado1=lado1;
	this->lado2=lado2;
	this->lado3=lado3;
}

double Triangle::area(){

	double p=(lado1+lado2+lado3)/2;
	double results=std::sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
	return results;
}


int main(){

	Triangle*t1=new Triangle(3,5,6,7);

	std::cout<<t1->getLados()<<std::endl;
	std::cout<<t1->area();

}
