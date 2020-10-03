//============================================================================
// Name        : Final.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

/*Create a program that can take in an array of any type (int, double,
 * float, long etc) and will sort it to be in ascending order using selection
 * sort. Your function should be of type void.
You may use helper functions but you cannot call functions that are part of
 the standard template library (STL). Meaning that you must code your own swap
 function etc if you require one.

*/

template<typename T>

void selection_sort(T array[], std::size_t capacity){

	std::size_t min=0;

	for(std::size_t i=0; i<capacity-1; i++){

		min=i;

		for(std::size_t j=i+1; j<capacity; j++){

			if(array[j]>array[min]){

				min=j;
			}
		}

		if(min!=i){

			std::swap(array[i],array[min]);
		}
	}
}

int main(){
    int array[4]={5,2,3,4};
    std::size_t cap=4;

    selection_sort(array, cap );

    for(std::size_t i=0; i<cap; i++){
        std::cout<<array[i]<<" ";
    }
}
