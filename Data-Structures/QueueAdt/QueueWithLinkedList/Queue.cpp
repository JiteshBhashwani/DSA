#include "Queue.hpp"

Queue::Queue() : head{nullptr},tail{nullptr},size{0}
{
}

Queue::~Queue()
{
    while (head)
    {
        node* del = head;
        head = head->next;
        delete del;
    }
    
}
void Queue::inQueue(int x)
{
    if(head == nullptr)
    {
        head = tail = new node(x);
    }
    else
    {
        tail->next = new node(x);
        tail = tail->next;
    }
        size++;
}
int Queue::deQueue()
{
    int deq{-1}; 
    if (head == nullptr)
    {
        std::cout << "Underflow" << std::endl;
    }
    else
    {
        deq = head->data;
        node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    return deq;
}
std::ostream& operator<< (std::ostream& os,const Queue& q)
{
    node* itr = q.head;
    os << "Size{" << q.size << "} ";
    while(itr)
    {
        os << itr->data << " ";
        itr = itr->next;
    }
    return os;
}