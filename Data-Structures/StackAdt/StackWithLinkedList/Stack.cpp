#include "Stack.hpp"

bool Stack::isEmpty()
{
    return (first == NULL);
}
bool Stack::isFUll()
{
    node* temp = new node(0);
    bool flag = temp == NULL;
    delete temp;
    return flag;
}

void Stack::push(node x)
{
    if (size == 0)
    {
        first = new node(x);
        first->next = NULL;
    }
    else
    {
        node* newNode = new node(x.data);
        newNode->next = first;
        first = newNode;  
    }
        size++;
}

int Stack::pop()
{
    int poped = -1;
    if(isEmpty())
    {
        std::cout << "Nothing to pop\n";
    }
    else
    {
        poped = first->data;
        node* temp = first;
        first = first->next;
        delete temp;
    }
    return poped;
}
void Stack::display()
{
    node* it = first;
    std::cout << "-\n";
    while (it)
    {
        std::cout << it->data << std::endl;
        it = it->next;
    }
    std::cout << "-\n";
    
}
Stack::~Stack()
{
    node* it = first;
    while(first)
    {
        first = first->next;
        delete it;
        it = first; 
    }
}