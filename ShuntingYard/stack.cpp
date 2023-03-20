#include <iostream>
#include "stack.h"
#include "node.h"

stack::stack() {
    this->head = NULL;
}

bool stack::isEmpty() {
    return this->head == NULL ? true : false;
}

void stack::push(char data) {
    node * new_node = new node();
    new_node->setData(data);
    new_node->setNext(this->head);
    this->head = new_node;
}

void stack::pop() {
    if (this->isEmpty()) return;
    
    node * temp = this->head;
    this->head = this->head->getNext();
    free(temp);
}

char stack::peek() {
    return this->isEmpty() ? '\0' : this->head->getData();
}

void stack::display() {
    if (this->isEmpty()) {
        std::cout << "Stack is empty!" << std::endl;
        return;
    }
    
    node * temp = this->head;
    while (temp != NULL) {
        std::cout << temp->getData() << std::endl;
        temp = temp->getNext();
    }
}

