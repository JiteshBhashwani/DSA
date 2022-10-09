#include "Array.hpp"

void Array::fill(int x){fill(x,this->cap);}
void Array::fill(int x,int n)
{
    if (n > cap)
    {
        return;
    }
    if (this->size > 0)
    {
        delete data;
    }
    data = new int[n];
    size = n;
    for (size_t i = 0; i < n; i++)
    {
        data[i] = x;       
    }
}
void Array::fill_inc(int f,int l)
{
    int diff = l-f+1;
    if (diff > cap || diff < 0) 
    {
        return;
    }
    if(this->size > 0)
    {
        delete data;
    }
    data = new int[diff];
    size = diff;
    for (size_t i = 0; f <= l; i++,f++)
    {
        data[i] = f;
    }
}

Array::Array(int cap,int size) : cap{cap}, size{size}
{
    data = new int[cap];
}
Array::Array(int* arr,int size): cap{size},size{size}
{
    Array(size,size);
    for (size_t i = 0; i < size; i++)
    {
        this->data[i] = arr[i];
    }
}
Array::Array(const Array& that) : cap{that.cap},size{that.cap}
{
    this->data = new int[that.size];
    for (size_t i = 0; i < that.size; i++)
    {
        this->data[i] = that.data[i];
    }
}
Array::~Array()
{
    delete []data;
}

std::ostream& operator << (std::ostream& os,const Array& that)
{
    for (size_t i = 0; i < that.size; i++)
    {
        os << that.data[i] << std::endl;
    }
    
    return os;
}