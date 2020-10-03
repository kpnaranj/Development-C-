//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
// cajero automatico

int main() {
	double saldo=1000,extra,option, f_saldo=0, retire;

	std::cout<<"Welcome to your online banking"<<std::endl;
	std::cout<<"1. savings"<<std::endl;
	std::cout<<"2. withdraw money"<<std::endl;
	std::cout<<"3. exit"<<std::endl;

	std::cin>>option;

	if (option==1){
		std::cout<<"How much money you want to save"<<std::endl;
		std::cin>>extra;

		f_saldo=saldo+extra;
		std::cout<<"Money saved, your account has: "<<f_saldo<<" dollars"<<std::endl;

	}


	else if (option==2){
		std::cout<<"How much money you want to withdraw"<<std::endl;
		std::cin>>retire;

		if (retire>saldo){
std::cout<<"We apologize, you do not have sufficient funds to continue the transaction"<<std::endl;
		}

		else if (retire<saldo){
		f_saldo=saldo-retire;
		std::cout<<"withdraw money succesful, your account has: "<<f_saldo<<" dollars"<<std::endl;

		}

		else {
		std::cout<<"We apologize, wrong input";
		}

	}

	else if (option==3){
		std::cout<<"Going out of transaction";
	}

	else {
		std::cout<<"Wrong command: Program terminated";
	}

	return 0;








}
