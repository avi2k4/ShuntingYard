#include <iostream>
#include <cstring>
#include <vector>
#include "stack.h"
#include "queue.h"
#include "node.h"

// Precedence according to https://en.wikipedia.org/wiki/Shunting_yard_algorithm
int precedence(char c);

int main() {
    std::vector<char> * input = new std::vector<char>;

    
	return 0;
}

int precedence(char c) {
    switch (c) {
        case '-': case '+':
            return 2;
            
        case '/': case '*':
            return 3;
            
        case '^':
            return 4;
            
        default:
            return 0;
    }
}
