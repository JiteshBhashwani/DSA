#include "LinkedList.hpp"
void LinkedList::push_back(int x)
{
    if(size == 0)
    {
        first = last = new node{x};
        first->next = first->prev = last;
        last->next = last->prev = first;
    }
    else
    {
        last->next = new node{x};
        last->next->prev = last;
        last->next->next = first;
        first->prev = last->next;
        last = last->next;
    }
    size++;
}
void LinkedList::push_front(int x)
{
    if(size == 0)
    {
        first = last = new node{x};
        first->next = first->prev = last;
        last->next = last->prev = first;
    }
    else
    {
        node* second = first;
        first = new node{x};
        second->prev = first;
        first->next = second;
        last->next = first;
        first->prev = last;
    }
    size++;
}
void LinkedList::pop_back()
{
    if (first == NULL)
    {
        std::cout << "stack underflow\n";       
    }
    else
    {
        node* temp = last;
        last->prev->next = first;
        first->prev = last->prev;
        last = last->prev;
        if (size == 1)
        {
            first = last = NULL;
        }
        delete temp;
        size--;
    }
}
void LinkedList::pop_front()
{
    if (first == NULL)
    {
        std::cout << "stack underflow\n";
        return;
    }
    else
    {
        node* temp = first;
        first->next->prev = last;
        last->next = first->next;
        first = first->next;
        delete temp;
        if (size == 1)
        {
            first = last = NULL;  
        }
        size--;
    }
    
}
LinkedList::LinkedList() : size{0}, first{NULL}, last{NULL}
{
}
void LinkedList::remove(int index)
{
    if(index < 0 || index > this->size) return;
    if(index == 0)
    {
        this->pop_front();
        return;
    }
    if(index == size)
    {
        this->pop_back();
        return;
    }
    node* temp = this->first;
    int i{0};
    while ((i < index) && (temp->next))
    {
        temp = temp->next;i++;
    }
    node* dump = temp;
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete dump;
    size--;
}
void LinkedList::insert(int x,int index)
{
    if(index < 0 || index > this->size) return;
    if(index == 0)
    {
        this->push_front(x);
        return;
    }
    if(index == size)
    {
        this->push_back(x);
        return;
    }
    node* itr = first;
    for (size_t i = 0; i < index; i++)
    {
        itr = itr->next;
    }
    itr->prev->next = new node(x);
    itr->prev->next->prev = itr->prev;
    itr->prev->next->next = itr;
    itr->prev = itr->prev->next;
    size++;
}

void LinkedList::clear()
{
    while (!empty())
    {
        this->pop_back();
    }
    
    
}
LinkedList::~LinkedList()
{
    if (first && last)
    {
        last->next = NULL;
        while (first->next)
        {
            node* x = first;
            first = first->next;
            delete x;
            x = NULL;
        }
    }
}
std::ostream& operator << (std::ostream& os,const LinkedList& that)
{
    if (that.size)
    {
        node* it = that.first;
        int i{0};
        os << " (" << that.size << ") ";
        do
        {
            os << it->data << " ";
            it = it->next;
            i++;
        } while (i < that.size);
    }   
    return os;
}
