#include <iostream>
#include "node.h"

class queue {
	private:
		node * head;
        node * rear;

	public:
		queue();
		void enqueue(char data);
		void dequeue();
		node * peek();
        void display();
};
