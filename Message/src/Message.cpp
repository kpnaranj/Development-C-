//============================================================================
// Name        : Message.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include "Message.h"

#ifndef MARMOSET_TESTING
int main();
#endif
std::string Node::get_fragment(){

	return fragment;

}

Node * Node::get_next(){

	return p_next;
}



Message::Message():head{nullptr}{

}

Message::~Message(){

	while(head!=nullptr){

		Node*current_node{head};
		Node*before_node{head};
		head=current_node->get_next();
		delete before_node;

	}

}

Node::Node( unsigned int id, std::string frag ){

	identifier=id;
	fragment=frag;
	p_next=nullptr;



}

// not use global variables

void Message::print_message(){

	// si counter = 0
	//
	std::size_t capacity=0;//size of my linked list

	bool question=true;// for question mark

	for ( Node *i=head; i != nullptr;i = i->get_next()){

		if (capacity<i->identifier){

			capacity=i->identifier;
			/*
			 * The capacity of my array will be my identifier
			 */

		}

		if(i->fragment=="EOT"){

			/*
			 * Add max capacity until EOT to avoid more terms printed
			 */

			capacity=i->identifier;
			break;
		}
	}

	bool *counter=new bool[capacity+1]{};// max capacity array if bool is false then show ...
	//
	for ( Node *current_node=head; current_node != nullptr;current_node = current_node->get_next()){

		counter[current_node->identifier]=true; // add true to values asigned

	}

	Node*new_current=head;

	for(unsigned int i=0; i<capacity+1; i++){

		if (counter[i]==true){

			if (new_current!=nullptr){

				if(new_current->p_next==nullptr){

					if(new_current->get_fragment()=="EOT"){
							question=false;
							std::cout<<std::endl;
						}

					else{
							std::cout <<new_current->get_fragment();

						}

				}

				else {

					if(new_current->get_fragment()=="EOT"){

							question=false;

						}

					else {
							std::cout <<new_current->get_fragment()<<" ";
						}

				}

			}

			new_current = new_current->get_next();
		}

		else {

			if(new_current==nullptr&&question==true){

				if(i==0){
					std::cout<<"???"<<std::endl;break;

				}

			}

			else{

				if(i<capacity){
					std::cout<<"... ";
				}
				else if(i==capacity){

					std::cout<<"..."<<std::endl;

				}

			}

		}

		if(new_current==nullptr&&question==true){
			std::cout<<" ???"<<std::endl;break;
		}

	}



	std::size_t positive=0;// To end line

	for(size_t i=0; i<capacity; i++){//I need to compare arrays and psoitive values

		if (counter[i]==true){

			positive++;
		}

	}

	if(positive==capacity){// if all my arrays are true and EOT is executed, then my line is completed
		std::cout<<"\0";
	}
	delete[] counter;// delete my array
	counter=nullptr;

}

void Message::insert( unsigned int id, std::string fragment){

	Node* new_node=new Node(id,fragment);
	Node* current_node;
	Node* transition;

	if (head==nullptr){

		head=new_node;


	}

	else{


		current_node=head;// the array I create
		transition=head;// to order array

	while(current_node->p_next!=nullptr){// condition of array

		current_node=current_node->p_next;

		}

		current_node->p_next=new_node;// add new array at the end of linked list

		while(transition!=nullptr){// go trough all the list to check values

			Node*ahead=transition->get_next();

			while(ahead!=nullptr){

				if((transition->identifier)>(ahead->identifier)){// if a values is greater to other switch
					unsigned int i=ahead->identifier;
					std::string command=ahead->fragment;

					ahead->identifier=transition->identifier;
					ahead->fragment=transition->fragment;

					transition->identifier=i;
					transition->fragment=command;

				}


				ahead=ahead->get_next();
			}

			transition=transition->get_next();

		}

	}

}


	// c in index and for fragment

#ifndef MARMOSET_TESTING
int main(){


	Message List;
		bool is_working=true;
		int i_value=0;
		unsigned int f_value=0;
		std::string commands{};


		do{

			std::cin>>i_value;


			if (i_value==-2){
				is_working=false;
				return 0;

			}
			else if(i_value==-1){
				List.print_message();
			}

			else if(i_value>=0){
				f_value=i_value;
				std::cin>>commands;
				List.insert(f_value,commands);
			}


		}while (is_working==true);


	return 0;
}
#endif
