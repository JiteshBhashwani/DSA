#include <iostream>
#ifndef _dQ_
#define _dQ_

struct node
{
    int data;
    node *prev, *next;

    node(int x) : data{x}, prev{nullptr}, next{nullptr} {}
};
class dQueue
{
private:
    node *first;
    node *last;
    int size;

public:
    dQueue();
    ~dQueue();

    bool empty() { return (first == nullptr); }
    int getSize() { return size; }
    int &front() { return first->data; }
    int &back() { return last->data; }
    int pop_back();
    int pop_front();
    void push_back(int x);
    void push_front(int x);
    void clear();
    friend std::ostream &operator<<(std::ostream &os, const dQueue &dq);
};

#endif