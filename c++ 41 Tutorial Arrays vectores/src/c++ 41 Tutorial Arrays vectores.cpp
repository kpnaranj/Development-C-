//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

//guardando todos los
		//elementos del vector

		// effective way of using arrays

	// Ahora, mostrar indices asociados
	/*
	 * Cada vector puede llevar un valor de uno
	 *	al iniciarse puede llevar varios valores
	 *	esos valores se almacenan en un
	 *	arrar mayor
	 *
	 *	int memoria[5];// Total de memoria que tengo
	 *	std::cin>>memory[3];// esto no es memoria
	 *	es una parte de la memoria
	 *	int memoria[5]={0,1,2,memoria[3],4,5}
	 *	memoria 3 tiene un dato, pero lo demas
	 *	todavia no se usa
	 *	entonces
	 *	usas un array al iniciar
	 *	para indicar el tamano de la fucnio
	 *	y almacenas la informacion con
	 *	una parte de ella
	 *
	 *
	 *
	 */

	std::cout<<"Neceitamos numeros"<<std::endl;

	int array[20],n; // numero de espacios que
	//quiero usar4
	std::cin>>n;

	std::cout<<"Your array will have "<<n<<" spaces"<<std::endl;

	for (int i=0; i<=n; i++){

	std::cout<<"For vector #"<<i<<std::endl;
	std::cin>>array[i];

	}

	for (int i=0; i<=n; i++){

	std::cout<<i<<" -> "<<array[i]<<std::endl;// Values that you get

	}









}
