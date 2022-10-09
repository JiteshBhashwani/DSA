#include <iostream>
#ifndef _Stack_
#define _Stack_
struct node
{
    int data;
    node* next;
    node(int data = 0):data{data},next{NULL}{}
};

class Stack
{
private:
    node* first;
    int size;
public:
    Stack():first{NULL},size{0}{}
    ~Stack();
    bool isEmpty();
    bool isFUll();
    void push(node x);
    int pop();
    void display();
};


#endif