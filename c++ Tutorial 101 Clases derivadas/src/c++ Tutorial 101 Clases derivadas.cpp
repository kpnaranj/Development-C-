//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

class Alumno{
private:
	std::string carrera;

public:

	Alumno(std::string carrera);
	void Mostrar_datos();
	~Alumno();
	std::string get_carrera();
	void set_carrera(std::string new_carrera);

};

class Deportista{
private:
	std::string entrenador;

public:

	Deportista(std::string entrenador);
	void Mostrar_datos();

	~Deportista();

	std::string get_entrenador();
	void set_entrenador(std::string new_entrenador);

};


class BecadoDeporte:public Deportista,Alumno{

private:
	double beca;

public:

	BecadoDeporte(std::string entrenador, std::string carrera, double beca);

	~BecadoDeporte();
	void Mostrar_datos();
	void set_beca(double beca);
	double get_beca();



};


Alumno::Alumno(std::string carrera){

	this->carrera=carrera;
}

void Alumno::Mostrar_datos(){

	std::cout<<"Nombre de carrera: "<<this->carrera;
}

Alumno::~Alumno(){

}

std::string Alumno::get_carrera(){

	return this->carrera;
}

void Alumno::set_carrera(std::string nueva_carrera){

	this->carrera=nueva_carrera;
}

Deportista::Deportista(std::string entrenador){

	this->entrenador=entrenador;

}

void Deportista::Mostrar_datos(){

	std::cout<<"Nombre de deporte: "<<this->entrenador;
}

std::string Deportista::get_entrenador(){

	return this-> entrenador;
}

void Deportista::set_entrenador(std::string nuevo_entrenador){

	this->entrenador=nuevo_entrenador;

}

Deportista::~Deportista(){


}

BecadoDeporte::BecadoDeporte(std::string entrenador, std::string carrera, double beca):Deportista(entrenador),Alumno(carrera) {

	this->beca=beca;
}

BecadoDeporte::~BecadoDeporte(){

}
void BecadoDeporte::Mostrar_datos(){

	Alumno::Mostrar_datos();
	Deportista::Mostrar_datos();
	std::cout<<"Cantidad de beca: "<<this->beca;

}

void BecadoDeporte::set_beca(double new_beca){

	double incremento=(this->beca*new_beca)/100;
	this->beca+=incremento;

}

double BecadoDeporte::get_beca(){
	return this->beca;
}







int main(){

	Alumno* alumnoJuan=new Alumno("informatica");
	Alumno* alumnoPedro=new Alumno("ingenieria en sistemas");

	Deportista*deportistaLuis=new Deportista("Popeye");

	BecadoDeporte* bdAna=new BecadoDeporte("Administracion","Luis",1200);
	BecadoDeporte* bdCarmen=new BecadoDeporte("Comtabilidad","La Roca",1300);

	std::cout<<"Mostrando datos:"<<std::endl;
	std::cout<<"Mostrando Datos de Alumno Juan"<<std::endl;
	alumnoJuan->Mostrar_datos();

	std::cout<<"Mostrando Datos de Alumno Pedro"<<std::endl;
	alumnoPedro->Mostrar_datos();

	std::cout<<"Mostrando Datos de deportista Luis"<<std::endl;

	deportistaLuis->Mostrar_datos();

	std::cout<<"Mostrando Datos de becaria Ana "<<std::endl;

	bdAna->Mostrar_datos();

	std::cout<<"Mostrando Datos de becaria Ana "<<std::endl;

	bdCarmen->Mostrar_datos();



	delete alumnoJuan;
	delete alumnoPedro;
	delete deportistaLuis;
	delete bdAna;
	delete bdCarmen;



}

