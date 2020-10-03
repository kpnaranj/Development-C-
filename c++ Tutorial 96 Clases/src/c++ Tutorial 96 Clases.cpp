//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * Definir clase dia ano,
 * los metodos igual, visualizar
 * mes es entero 1-12
 * el dia con otra variable
 * escribir un programa que
 * compruebe si una fecha es
 * mi cumpleanos
 */

#include <iostream>

class DiaAnio{

private:

	int dia,mes;

public:

	//metodos, unicos

	// metodo constructor, mismo nombre
	// que la clase, inicializar los atributos

	DiaAnio(int _dia, int _mes ){

		dia=_dia;
		mes=_mes;

	}

	// Fecha de hoy,
	//Fecha de cumpleanios

	bool igual(DiaAnio d);
	void visualizar();



};

bool DiaAnio::igual(DiaAnio d){

	//atributo completo
	//si el atributo es igual
	//al que estamos comprobando

	// dia se encuentra adentro

	if (dia==d.dia && mes== d.mes){

		return true;

	}

	else {
		return false;

	}

}

void DiaAnio::visualizar(){

	std::cout<<"Mostrando datos: "<<std::endl;
	std::cout<<"Mes: "<<mes<<"Dia "<<dia<<std::endl;

}




int main() {

	DiaAnio* hoy;
	DiaAnio* cumple;

	int d,m;

	std::cout<<"Introduzca la fecha de hoy: ";
	std::cin>>d;

	std::cout<<"Introduzca el numero del mes ";
	std::cin>>m;

	hoy=new DiaAnio(d,m);

	std::cout<<"Introduzca la fecha de cumpleanios ";
	std::cin>>d;
	std::cin>>m;

	cumple=new DiaAnio(d,m);

	//Mostrar fechs

	hoy->visualizar();
	std::cout<<std::endl;

	cumple->visualizar();
	std::cout<<std::endl;

	if (hoy->igual(*cumple)){

		std::cout<<"Feliz cumpleanos ";

	}

	else {

		std::cout<<"Que tenga un beun dia";

	}



}
