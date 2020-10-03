//============================================================================
// Name        : Tests.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	int n;
	std::cin>>n;
	int odds[5]{0,2,4,6,8};
	int even[5]{1,3,5,7,9};
	int result;
	int even_value;
	int odd_value;
	for (int i=10;i<=n;i*=10){
// 6543-6000 i*result 543

		if (n>i) {
			result=(n)/i;
			}
		for (int j=0;j<=5;j++){
			if (n<i&&i==odds[j]){
			even_value=result;
			std::cout<<even_value<<std::endl;
			}
			else if (n<i&&i==even[j]){
			odd_value=result;
			std::cout<<odd_value<<std::endl;
			}
		}
		if (n<i){
			n=n-(result*i);
			i/=10;
			}
		else if (i==0){
			result=n;
			std::cout<<result<<std::endl;
			return 0;
			}
		}
	}
