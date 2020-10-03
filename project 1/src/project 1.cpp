//============================================================================
// Name        : project.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
int exponential(int n){

		int result1=1;

	for (int i=1;i<=n;++i){
		result1*=i;
	std::cout<<result1<<std::endl;
		}

	return result1;
}

int given_value (int n){
	int result2=1;

		for (int j=1;j<=n;++j){
			result2*=j;
		std::cout<<result2<<std::endl;
			}

	return result2;
}




int main (){

	int n;
	//int n;int k;int a=1;int b=1;std::cin>>n;std::cin>>k; int c[n][k]{}; for (int i=1;i<=n;++i){for (int j=1; j<=k;j++){std::cout<<a<<" "<<c[i][j]<<" "<<b<<std::endl;}
	std::cin>>n;
	std::cout<<given_value(n)<<std::endl;
	return 0;

}

