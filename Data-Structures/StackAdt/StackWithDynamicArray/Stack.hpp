#include <iostream>
#ifndef _Stack__
#define _Stack__
class Stack
{
private:
    int* data;
    int _size;
    int cap;
public:
    Stack(int cap);
    bool isEmpty(){return ((this->_size == 0)? true:false);}
    bool isFull(){return ((this->_size == cap)? true:false);}
    int peek(int index);
    int top(){return peek(_size-1);}
    int size(){return _size;}
    void push(int x);
    int pop();
    void display();
    ~Stack();
};
#endif //_Stack_