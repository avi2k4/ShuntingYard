#include <iostream>
#include "btnode.h"

btnode::btnode() {
    this->data = NULL;
    this->right = NULL;
    this->left = NULL;
}

void btnode::setData(char data) {
    this->data = data;
}

char btnode::getData() {
    return this->data;
}

void btnode::setRight(btnode * node) {
    this->right = node;
}

btnode * btnode::getRight() {
    return this->right;
}

void btnode::setLeft(btnode * node) {
    this->left = left;
}

btnode * btnode::getLeft() {
    return this->left;
}
