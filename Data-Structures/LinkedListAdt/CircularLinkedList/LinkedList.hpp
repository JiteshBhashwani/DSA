#ifndef _LinkedList
#define _LinkedList
#include <iostream>
struct node
{
    node* prev;
    int data;
    node* next;
    node(int data):data{data},prev{NULL},next{NULL}{}
};
class LinkedList
{
private:
    node* first;
    node* last;
    int size;
public:
    LinkedList();
    ~LinkedList();
    bool empty(){return first == NULL;}
    int& front(){return this->first->data;}
    int& back(){return this->last->data;}
    void push_back(int x);
    void push_front(int x);
    void pop_back();
    void pop_front();
    void remove(int index);
    void insert(int x,int index);
    void clear();
friend std::ostream& operator << (std::ostream& os,const LinkedList& that);
};
#endif