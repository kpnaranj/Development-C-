//============================================================================
// Name        : Notas.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>


void options();

class notas{
	private:

	double midterm;
	double final;
	double grades;
	double overal;

	public:

	notas(){};
	~notas(){};
	void insert_grades();
	void report();
	void insert_notes(int input, notas* &general);
};

notas::notas(){



}

int main(){

	bool is_working=true;
	std::string commands{};
	int input{0};
	std::size_t capacity_notas{6};

	notas*general=new notas[capacity_notas]{};



	do{

		std::cout<<"Please, insert input to use: "<<std::endl;

		options();

		std::cout<<"value==> ";std::cin>>input;



		std::cout<<"Continue y/n:";std::cin>>commands;

		if(commands=="n"){

			is_working=false;
		}

	}while(is_working==true);



}

void options(){

	for(int i=1; i<=6; i++){

	switch (i){

		case 1: std::cout<<i<<"\tECE 150";break;
		case 2: std::cout<<i<<"\tECE 190";break;
		case 3: std::cout<<i<<"\tFRENCH 151";break;
		case 4: std::cout<<i<<"\tGENE 191";break;
		case 5: std::cout<<i<<"\tEMLS 121";break;
		case 6: std::cout<<i<<"\tMATH 115";break;

		}

		std::cout<<std::endl;

	}

}


void notas::insert_notes(int input,notas* &general){




}




