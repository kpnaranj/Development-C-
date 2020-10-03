//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>

int main() {

	srand(time(NULL));


	 size_t capacity;
	 std::cin>>capacity;
	 int arrays[capacity]{};
	 int *p_arrays;
	 p_arrays=arrays;
	 int menor=100;


	 for (std::size_t k{0};k<capacity;k++){
		 int n= 1+(rand()%100);

		 arrays[k]=n;

		 std::cout<<arrays[k]<<" ";

	 }

	 std::cout<<std::endl;



	 for (std::size_t i{0};i<capacity;i++){

		if (*p_arrays<menor){

			menor=*p_arrays;

		}

		p_arrays++;

	 }

	 std::cout<<"Lower value is: "<<menor;





}
