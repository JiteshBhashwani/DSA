#include <iostream>
#ifndef _LinkedList_
#define _LinkedList_
struct node
{
    int data;
    node* next;
    node(int data = 0):data{data},next{NULL}{}
};
class LinkedList
{
private:
    node* first;
    node* last;
    int _size;
public:
    LinkedList();
    ~LinkedList();
//Methods:
    int back();
    void clear();
    bool empty();
    int front();
    void insert(int x,int index);
    int pop_back();
    int pop_front();
    void push_back(int x);
    void push_front(int x);
    void remove(int index);
    void reverse();
    int size(){return this->_size;}
//operator overloading
friend std::ostream& operator<<(std::ostream& os,const LinkedList& that);
};
#endif //_LinkedList_