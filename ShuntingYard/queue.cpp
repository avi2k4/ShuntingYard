#include <iostream>
#include "queue.h"
#include "node.h"

queue::queue() {
    this->head = NULL;
    this->rear = NULL;
}

void queue::enqueue(char data) {
    node * new_node = new node();
    new_node->setData(data);
    
    if (this->rear == NULL) {
        this->head = this->rear = new_node;
        return;
    }
    
    this->rear->setNext(new_node);
    this->rear = new_node;
}

void queue::dequeue() {
    if (this->rear == NULL) return;
    
    node * temp = this->head;
    this->head = this->head->getNext();
    
    if (this->head == NULL) {
        this->rear = NULL;
    }
    
    free(temp);
}

char queue::peek() {
    return this->head == NULL ? '\0' : this->head->getData();
}

void queue::display() {
    if (this->head == NULL) {
        std::cout << "Queue is empty!" << std::endl;
        return;
    }
    
    node * temp = this->head;
    
    while (temp != NULL) {
        std::cout << temp->getData() << std::endl;
        temp = temp->getNext();
    }
}
