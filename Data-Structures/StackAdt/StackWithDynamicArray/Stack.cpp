#include "Stack.hpp"

int Stack::peek(int index)
{
    if(index > _size || index < 0) 
    {
        std::cout << "invalid index\n";
        return -1;
    }
    return data[index];
}
int Stack::pop()
{
    int poped = -1;
    if(this->isEmpty())
    {
        std::cout << "stack underflow\n";
    }
    else
    {
        poped = data[--_size];
        data[_size] = 0;
    }
    return poped;
}
void Stack::push(int x)
{
    if(this->isFull())
    {
        std::cout << "stack overflow\n";
    }
    else
    {
        data[_size++] = x;
    }
}
void Stack::display()
{
    int it = this->_size;
    std::cout << "-\n";
    for (size_t i = 1; i <= this->_size; i++)
    {
        std::cout << data[this->_size-i] << std::endl;
    }
    
    std::cout << "-\n";
}
Stack::Stack(int cap) : _size{0}, cap{cap}
{
    data = new int[cap];
    for (size_t i = 0; i < cap; i++)
    {
        data[i] = 0;
    }
}

Stack::~Stack()
{
    delete []data;
}
