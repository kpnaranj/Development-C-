//============================================================================
// Name        : Trabajo.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#ifndef MARMOSET_TESTING
int main();
#endif

class Node {
    friend class Message;
    public:
        Node *get_next(); //Returns the pointer to the next node. // envia el siguiente nudo
        std::string get_fragment(); //Returns the string representing the fragment stored in this packet.
        // simplemente regresa un valor en la seleccion
        Node( unsigned int id, std::string frag ); // This is the constructor // valores que obtendre de la computadora
    private:
        unsigned int identifier; //Stores the packet identifier.
        std::string fragment; //Stores the packet message that corresponds to one string.
        Node *p_next; //A pointer to the next node in the linked list of type Node.
};

class Message {

public:
        Message();
        //This is the default constructor. It will set the head to the null pointer.

        ~Message();
        //This is the destructor. We must ensure that the dynamically allocated nodes are deallocated properly.

        void insert( unsigned int id, std::string fragment);
        //Inserts a node in the linked list that contains the packet information provided as parameters.

        void print_message();
        //Prints to the console output stream the stored message as described above.

    private:
        Node *head; //A pointer to the first packet of the message.


};

Node* current_node;

Node* Node::get_next(){

	return p_next;
}


std::string Node::get_fragment(){

	return fragment;

}


Message::~Message(){

}



Message::Message(){
	head=nullptr;
}

Node::Node(unsigned int id, std::string frag){

	identifier=id;
	fragment=frag;
	p_next=nullptr;

}



void Message::insert(unsigned int id, std::string fragment){

	Node* new_node=new Node(id,fragment);

	current_node=nullptr;

	new_node->identifier=id;
	new_node->get_fragment()=fragment;
	new_node->p_next=nullptr;

	if (head!=nullptr){

		current_node=head;

		while(current_node->get_next()!=nullptr){

			current_node=current_node->get_next();

		}

		current_node->p_next=new_node;

	}

	else {

		head=new_node;
	}

}

/*void Message::insert(unsigned int id, std::string fragment){

	// Anadir valores desde 0 hasta 4
	// Usar tres pointer para la labor

	Node*new_node=new Node(id,fragment);
	new_node->identifier=id;
	new_node->fragment=fragment;
	new_node->p_next=nullptr;

	Node*temp,*current;
	temp=new_node;

	if (id==0){

		head=new_node;

	}



}*/


void Message::print_message(){

	current_node=head;


		while (current_node != nullptr){



		/*std::cout<<current_node->identifier;*/
		std::cout<<current_node->get_fragment();
		current_node=current_node->get_next();

		}





}


void insert_commands(bool &is_working,Message &List,unsigned int &values,std::string &commands){
	switch (values){

		case -2:is_working=false;break;
		case -1:List.print_message();break;
		case 0:commands="1A"; break;
		case 1:commands="is"; break;
		case 2:commands="almost";break;
		case 3:commands="over";break;
		case 4:commands="EOT";break;

		}

}

int main() {

	Message List;
	bool is_working=true;
	unsigned int values;
	std::string commands{};

	do{
		std::cout<<"Insert value:";
		std::cin>>values;

		insert_commands(is_working,List,values,commands);

		List.insert (values, commands);


	}while (is_working==true);


return 0;


}
