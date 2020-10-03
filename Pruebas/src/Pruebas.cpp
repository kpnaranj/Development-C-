//============================================================================
// Name        : Pruebas.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

struct Node {
int data;
Node* next;
};
Node* insert(Node*n, int d) {
Node* nd = new Node;
nd->data = d;
nd->next = n;
return nd;
}
Node* findByIndex(Node* n, int i) {
if (n == 0)
return 0;
if (i == 0)
return n;
return findByIndex(n->next, --i);
}

int findIndex(Node* n, int d);

int fI(Node* n, int d, int i) {
if (n == 0)
return -1;
if (n->data == d){
return i;}
return findIndex(n->next,d,++i);
}

int findIndex(Node* n, int d) {
return fI(n, d, 0);
}
int main() {
Node* n = 0;
n = insert(n,3);
n = insert(n,21);
n = insert(n,-19);
n = insert(n,46);
n = insert(n,15);
}
