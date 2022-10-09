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
        tail->next = head;
    }
    else
    {
        tail->next = new node(x);
        tail = tail->next;
        tail->next = head;
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
    else if (head == tail)
    {
        deq = head->data;
        node* temp = head;
        head = tail = nullptr;
        delete temp;
    }
    
    else
    {
        deq = head->data;
        node* temp = head;
        head = head->next;
        tail->next = head;
        delete temp;
        size--;
    }
    return deq;
}
std::ostream& operator<< (std::ostream& os,const Queue& q)
{
    if(q.head){
    os << "Size{" << q.size << "} ";
    os << q.head->data << " ";
    node* itr = q.head->next;
    while(itr != q.head)
    {
        os << itr->data << " ";
        itr = itr->next;
    }}
    return os;
}