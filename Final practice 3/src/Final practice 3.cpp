//============================================================================
// Name        : Final.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

class Person{
private:
	std::string name;
	int age;
public:
	Person(std::string name,int age);
	~Person();
	std::string get_name();
	int get_age();
};

class student:public Person{
private:
	int id;
public:
	student(std::string name,int age,int id);
	~student();
	int get_id();
};
class ECE_150:public student,Person{
private:
	int grade;
public:
	ECE_150(std::string name,int age,int id, int grade);
	~ECE_150();
	int get_grade();

};

Person::Person(std::string name,int age){
	this->name=name;
	this->age=age;

}



