//============================================================================
// Name        : teoria.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

// Arreglos de tipo estatico, el numero de elementos
//no podia cambiar, la memoria se desperdiciaba


// asignacion dinamica de arreglos
//memoria que no utilizabamos
// Arreglos dinamicos
// new:reservar los espacios que valores a utilizar
// delete: liberar un bloque de bites reservados

// Pedir calificaciones

// solamente el espacio necesario para arreglo

////////////////////////////////////////////////////////

std::size_t cap_notas;

int *p_notas;

void calculadora();





int main(){

	calculadora();

	delete[] p_notas;

}

////////////////////////////////

void calculadora(){

	p_notas=new int[cap_notas];

	for (std::size_t k{0};k<cap_notas; k++){

		std::cin>>p_notas[k];

	}

	for (std::size_t i{0}; i<cap_notas; i++){

		std::cout<<p_notas[i]<<"";

	}




}


