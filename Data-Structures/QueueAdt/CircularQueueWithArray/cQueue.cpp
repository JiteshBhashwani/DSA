#include "cQueue.hpp"

cQueue::cQueue() : head{-1},tail{-1},_size{0}
{
    for(int i = 0;i < SIZE;i++){arr[i]=0;}
}

void cQueue::enqueue(int x)
{
    if(isFull()){std::cout << "stack overflow\n";}
    else if(isEmpty()){
        head=tail=0;
        arr[head] = x;
        _size++;
    }
    else
    {
        tail = ((tail+1)%(SIZE));
        arr[tail] = x;
        _size++;
    }
    return;
}
int cQueue::dequeue()
{
    int dequeued = -1;
    if(isEmpty()){std::cout << "stack underflow\n"; return dequeued;}
    dequeued = arr[head];
    if(size() == 1){
        arr[head] = 0;head = tail = -1;
    }
    else
    {
        arr[head] = 0;
        head = ((head+1)%SIZE);
    }
    _size--;
    return dequeued;
}
void cQueue::display()
{
    for(int i = 0;i < SIZE;i++ )
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout <<std::endl << "size: " << _size << std::endl;
}
std::ostream& operator << (std::ostream& os,const cQueue& that)
{
        for(int i = 0;i < SIZE;i++ )
    {
        os << that.arr[i] << " ";
    }
    os << "\nsize: " << that._size << std::endl;
    return os;
}