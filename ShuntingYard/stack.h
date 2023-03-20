#include <iostream>
#include "node.h"

class stack {
	private:
		node * head;

	public:
		stack();
        bool isEmpty();
		void push(char data);
		void pop();
		char peek();
        void display();
};
