#include "LinkedList.hpp"

LinkedList::LinkedList() : _size{0}
{
    this->first = this->last = NULL;
}
LinkedList::~LinkedList()
{
    node* it = this->first;
    while (this->first)
    {
        first = first->next;
        delete it;
        it = first;
    }
}

int LinkedList::back()
{
    return this->last->data;
}
void LinkedList::clear()
{
    node* it = this->first;
    while (this->first)
    {
        first = first->next;
        delete it;
        it = first;
    }_size=0;
}
bool LinkedList::empty()
{
    return (this->first == NULL);
}
int LinkedList::front()
{
    return this->first->data;
}
void LinkedList::insert(int x,int index)
{
    if(index < 0 || index > this->_size) return;
    if(index == 0)
    {
        this->push_front(x);
        return;
    }
    if(index == _size)
    {
        this->push_back(x);
        return;
    }
    node* temp = this->first;
    int i{0};
    while ((i < index) && (temp->next))
    {
        temp = temp->next;i++;
    }
    node* newNode = new node(x);
    temp->previous->next = newNode; 
    newNode->next = temp;
    _size++;
}
int LinkedList::pop_back()
{
    int popped{-1};
    if (this->empty())
    {
        std::cout << "Stack Undeflow" << std::endl;
    }
    else
    {
        popped = this->last->data;
        node *lastSecond = this->last->previous;
        lastSecond->next = NULL;
        delete this->last;
        this->last = lastSecond;
        _size--;
    }
    
    return popped;
}
int LinkedList::pop_front()
{
    int popped{-1};
    if(this->empty())
    {
        std::cout << "stack undeflow" << std::endl;
    }
    else
    {
        popped = this->first->data;
        node* second = this->first->next;
        second->previous = NULL;
        delete first;
        first = second;
    }
    _size--;
    return popped;
}
void LinkedList::push_back(int x)
{
    if (this->empty())
    {
        this->first = this->last = new node(x);
    }
    else
    {
        this->last->next = new node(x);
        this->last->next->previous = this->last;
        this->last = this->last->next;
    }
    _size++;   
}
void LinkedList::push_front(int x)
{
    if(this->empty())
    {
        this->first = this->last = new node(x);
    }
    else
    {
        node* temp = new node(x);
        temp->next = this->first;
        this->first->previous = temp;
        this->first = temp;
    }
    
}
void LinkedList::remove(int index)
{
    if(index < 0 || index > this->_size) return;
    if(index == 0)
    {
        this->pop_front();
        return;
    }
    if(index == _size)
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
    temp->previous->next = temp->next;
    delete dump;
    _size--;
}
std::ostream& operator<<(std::ostream& os,const LinkedList& that)
{
    node* it = that.first;
    int index = 0;
    os << "("<< that._size << ") ";   
    while (it)
    {
        os << "[" << it->data << "]<->";
        it = it->next;
    }
    os << "[NULL]\n";
    return os;
}
