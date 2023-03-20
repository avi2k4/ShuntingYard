#include <iostream>
#include "node.h"

node::node() {
    this->next = NULL;
    this->data = NULL;
}

void node::setData(char data) {
	this->data = data;	
}

void node::setNext(node * next) {
	this->next = next;
}

char node::getData() {
	return this->data;
}

node * node::getNext() {
	return this->next;
}
