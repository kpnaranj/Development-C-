//============================================================================
// Name        : guess.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>

int main() {

	srand(time(NULL));



	std::string commands{};

	std::cout<<"Welcome to the Guess-o-tron 2000!";

	std::cout<<"Your number is "<<init;

	bool guessing=false;

	while (guessing==false){


		if (commands=="y"){

			guessing=true;

		}

		else if (commands=="Higher"){







		}

		else if (commands=="Lower"){



		}

		else if (commands=="n"){

			number_guess++;

		}

		else {

			std::cout<<"Invalid output";
			throw 0;
		}






	}


}
