//============================================================================
// Name        : Tutorial.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



class String;

class String{   // This function os connected with classes, we can use a constructor
	 // Labels: Public and private are keywors
public:


	// Multiple constructors, array of length 0

	// string();  access private allocation

	// many users can access your code, protection of classes \\

	String();
	String(std::size_t string_length);

	// I can change the functions inside
private:

	std::size_t arrays_capacity;

	std::size_t string_length;

	char *character_array;

}; // Capitalized
// Include any classes that you use

template <typename T>

Array<T>::Array(std::size_t cap);

template <typename T>

Array<T>::~Array(){
	delete[]array;

	array=nullptr;

}





int main() {
	String str{};

	// Not deconstructor

	~String ();






}
