#ifndef NODE_H
#define NODE_H

#include <iostream>

class node {
	private:
		char data;
		node * next;

	public:
        node();
		void setData(char data);
		void setNext(node * next);
		char getData();
		node * getNext();
};

#endif
