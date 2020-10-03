//============================================================================
// Name        : pascal.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

int body_structure(int n,int k );
int pascal_triangle (int n);
int main();


int	body_structure(int n, int k){

	if (n==k||k==0){
		return 1;}

	else{
		return body_structure(n-1,k-1)+body_structure(n-1,k);
	}
}

int pascal_triangle (int n){

	for (int i=0;i<=n;i++){
		for (int j=0;j<=i;j++){
			std::cout<<body_structure(i,j)<<" ";
		}
		std::cout<<std::endl;
	}
	return 0;
}



int main (){
	int n;
	std::cin>>n;
	pascal_triangle(n);
	return 0;
}
