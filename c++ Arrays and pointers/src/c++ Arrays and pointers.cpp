//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int Numeros(int ini, int fin){
	//// 123456789        1+
	if (ini==fin){
		return ini;
	}
	else if (ini<fin){

		return Numeros(ini,fin-1);

	}

}

