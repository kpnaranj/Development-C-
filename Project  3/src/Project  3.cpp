//============================================================================
// Name        : Project.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "*Message.h"



// Clasificacion de listas
// Cuatro catfirias

/*
 * Listas simplemente enlazadas --> cada nodo contiene
 * un unico enlace solo el de delante hasta que la lista
 * este finalizada
 *
 * Lista doble -->Predecesor adelante y atras
 * Uno para adelante y otro para atras
 * Lista circular--> Lista que se puede recorrer
 * toda la lista
 * Lista circular hacia adelante como hacia atras
 * Todas las direcciones
 *
 * Lista que voy a usar, lista simple enlazada
 *
 * Operaciones
 *
 * Insertar elementos en listas enlazadas
 * Mostrar elementos en una lista enlazada
 * Buscar un elemento en una lista enlazada
 * Eliminar un elemento de una lista
 *
 *
 * |||||||||||||||||||||||||||||||||||||\
 * como insertar elementos en una lista
 *
 * crear un nuevo nodo
 * 1. Asignar a un nuevo nodo
 * 2. dato que queremos en la lista
 * 3. crear nodos auxiliares para asignar la lista al
 * primero de ellos
 * 4. Insertar los elementos
 *
 *
 */






int main() {

	unsigned int id;
	std::string fragment;
	bool is_working=true;

	// printing funtion()keeps all the information

	do {
	std::cout<<"Please insert value: "<<std::endl;
	std::cin>>id;


	switch (id){
	case -2: is_working=false;break;
	// case -1: printing function ; break
	case 0: fragment="1A"; break; // add function to add
	case 1: fragment="is"; break;
	case 2: fragment="almost"; break;
	case 3: fragment="over"; break;
	case 4: fragment="EOT"; break;

		}

	}while (is_working==true);


	return 0;



}
