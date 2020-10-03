//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

struct Etapa{
	int horas,min,segundos;

};
void pedirDatos();
void calcularTiempo (Etapa* p_etapas);

Etapa etapas[3];

Etapa* p_etapas=etapas;

void calcularTiempo(Etapa*);

int main(){

pedirDatos();
calcularTiempo (p_etapas);

}

void pedirDatos(){

	std::cout<<"Digite los tiempos empleados: \n";

	for (int i=0;i<3; i++){

		std::cout<<"Horas== ";std::cin>>(p_etapas+i)->horas;
		std::cout<<"Minutos== ";std::cin>>(p_etapas+i)->min;
		std::cout<<"Segundos== ";std::cin>>(p_etapas+i)->segundos;

	}
}

void calcularTiempo(Etapa*p_etapa){
	int horasT=0,minutosT=0,segundosT=0; //Inicial

	for (int i=0; i<3; i++){

		horasT+=(p_etapa+i)->horas;
		minutosT+=(p_etapa+i)->min;

		if (minutosT>=60){
			minutosT-=60;
			horasT++;

		}
		segundosT += (p_etapa+i)->segundos;
	}

	if (segundosT>=60){

		segundosT-=60;
		minutosT++;

	}

	std::cout<<"Tiempo total=="<<horasT<<" "<<minutosT<<" "<<segundosT;
}
