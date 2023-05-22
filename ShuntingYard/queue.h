#include <iostream>
#include "node.h"

class queue {
	private:
		node * head;
        node * rear;

	public:
		queue();
        ~queue();
		void enqueue(char data);
		void dequeue();
		char peek();
        void display();
};
