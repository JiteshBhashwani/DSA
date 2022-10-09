#include "dQueue.hpp"

dQueue::dQueue() : first{nullptr}, last{nullptr}, size{0}
{
}

dQueue::~dQueue()
{
}
void dQueue::push_front(int x)
{
    if (this->empty())
    {
        first = last = new node(x);
    }
    else
    {
        first->prev = new node(x);
        first->prev->next = first;
        first = first->prev;
    }
    size++;
}
void dQueue::push_back(int x)
{
    if (empty())
    {
        first = last = new node(x);
    }
    else
    {
        last->next = new node(x);
        last->next->prev = last;
        last = last->next;
    }
    size++;
}

int dQueue::pop_back()
{
    int popped{-1};
    if (this->empty())
    {
        std::cerr << "underflow" << std::endl;
    }
    else if (first == last)
    {
        delete first;
        first = last = nullptr;
        size--;
    }
    else
    {
        node *temp = last;
        last = last->prev;
        last->next = nullptr;
        delete temp;
        size--;
    }
    return popped;
}
int dQueue::pop_front()
{
    int popped{-1};
    if (this->empty())
    {
        std::cerr << "underflow" << std::endl;
    }
    else if (first == last)
    {
        delete first;
        first = last = nullptr;
        size--;
    }

    else
    {
        node *temp = first;
        first = first->next;
        first->prev = nullptr;
        delete temp;
        size--;
    }
    return popped;
}

void dQueue::clear()
{
    while (first)
    {
        node *temp = first;
        first = first->next;
        delete first->prev;
        // delete temp;
    }
    size = 0;
}

std::ostream &operator<<(std::ostream &os, const dQueue &dq)
{
    node *itr = dq.first;
    os << dq.size << " - ";
    while (itr)
    {
        os << itr->data << " ";
        itr = itr->next;
    }
    return os;
}
