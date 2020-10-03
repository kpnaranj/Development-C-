//============================================================================
// Name        : Use.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>



struct node{
	int data;
	node* next;

};


int main() {

	node *n;
	node *p;
	node *h;

	*n=new node;
	n->data=1;
	p=n; // tomamos la memoria de p o en su defecto apuntamos a n totalmente
	h=n;

	n=new node;
	n->data=5;
	p->next=n;
	p=p->next;

	n=new node;
	n->data=3;
	p->next=n;

	n=new node;
	p=p->next;





}
