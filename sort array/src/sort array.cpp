//============================================================================
// Name        : sort.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void sort_arrays (int to_sort[]);

void sort_arrays (int to_sort[]){

	if (to_sort[0]<=to_sort[1]&&to_sort[1]<=to_sort[2]){

	}
	else if (to_sort[0]>=to_sort[1]&&to_sort[1]<=to_sort[2]){
	int change_value=to_sort[0];
	to_sort[0]=to_sort[1];
	to_sort[1]=change_value;
	}

	else {
	int change_value=to_sort[1];
	to_sort[1]=to_sort[2];
	to_sort[2]=change_value;

	}
	if (to_sort[1]>=to_sort[2]){
	int change_value=to_sort[1];
	to_sort[1]=to_sort[2];
	to_sort[2]=change_value;
	}


}







int main() {
	int arrays[3]{};
	std::cin>>arrays[0]>>arrays[1]>>arrays[2];

	sort_arrays (arrays);

	std::cout<<arrays[0]<<arrays[1]<<arrays[2]<<std::endl;




	return 0;
}
