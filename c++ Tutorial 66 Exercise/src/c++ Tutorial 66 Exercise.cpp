//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

// crear elementos en la lista que muestre valores y encuentre menor y mayor numero

class Node{
private:
	int value;
	Node*p_next;
	Node*head;
public:
	Node(int value);
	~Node();
	void insert_values(int n_value);
	void printing ();
	int get_value();
	Node*get_next();
	void ordering_values();

};


int Node::get_value(){
	return value;
}

Node*Node::get_next(){

	return p_next;
}

Node::Node(int value){

	this->value=value;
	p_next=nullptr;
	head=nullptr;


}

Node::~Node(){

	while(head!=nullptr){
	Node*current=head;
	Node*before=head;
	head=current->get_next();
	delete before;


	}


}
