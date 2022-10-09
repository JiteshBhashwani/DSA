#include <iostream>
#ifndef _Queue_
#define _Queue_
struct node
{
    node *next;
    int data;
    node(int data) : next{nullptr},data{data}{}
};
class Queue
{
private:
    node* head;
    node* tail;
    int size;
public:
    Queue();
    ~Queue();

    void inQueue(int x);
    int deQueue();
    int& front(){return this->head->data;}
    int& back(){return this->tail->data;}
    int size_(){return size;}
    bool empty(){return (head==nullptr);}
friend std::ostream& operator<< (std::ostream& os,const Queue& q);

};


#endif //_Queue_