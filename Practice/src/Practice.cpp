//============================================================================
// Name        : Practice.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//Transfor uper-lows and viceverse
 //For your information, the ASCII values for ‘a’ to ‘z’ are in the range of 97 to 122, while those for ‘A’ to ‘Z’ are in the range of 65 to 90
int main(){
	char letter;
	std::cin>>letter;
	char new_letter;
	bool is_letter=true;
	if (is_letter){
		if (letter<=122&&letter>=97){
			new_letter=letter-32;
			std::cout<<new_letter<<std::endl;

		}
		else if (letter<=90&&letter>=65){
			new_letter=letter+32;
			std::cout<<new_letter<<std::endl;
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
		}
	}

