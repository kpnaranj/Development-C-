//============================================================================
// Name        : Message.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef MESSAGE_H
#define MESSAGE_H
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
#endif

/*#include<iostream>
#include <string.h>
#ifndef MESSAGE_H
#define MESSAGE_H
class Node {
    friend class Message;
    public:
        Node *get_next(); //Returns the pointer to the next node.
        std::string get_fragment(); //Returns the string representing the fragment stored in this packet.
        Node( unsigned int id, std::string frag ); // This is the constructor
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
#endif*/


