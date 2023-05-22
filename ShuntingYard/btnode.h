#ifndef btnode_h
#define btnode_h

class btnode {
    private:
        char data;
        btnode * right;
        btnode * left;
    
    public:
        btnode();
        ~btnode();
        void setData(char data);
        char getData();
        void setRight(btnode * node);
        btnode * getRight();
        void setLeft(btnode * node);
        btnode * getLeft();
};

#endif
