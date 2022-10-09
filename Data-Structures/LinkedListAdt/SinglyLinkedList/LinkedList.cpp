#include "LinkedList.hpp"

LinkedList::LinkedList() : first{NULL}, last{NULL}, _size{0}
{
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
bool LinkedList::empty()
{
    return (this->first == NULL);
}
void LinkedList::clear()
{
    node* it = this->first;
        while (this->first)
        {
            first = first->next;
            delete it;
            it = first;
        }
        _size = 0;
}
int LinkedList::front()
{
    return this->first->data;
}
void LinkedList::insert(int x,int index)
{
    if(index < 0 || index > this->_size) 
    {
        std::cout << "invalid index\n";
        return;
    }
    else if (index == 0)
    {
        this->push_front(x);
        return;
    }
    else if (index == _size)
    {
        this->push_back(x);
        return;
    }
    node* head = this->first;
    node * tail = NULL;
    int itr{0};
    while (head->next && (itr < index))
    {
        tail = head;
        head = head->next;
        itr++;
    }
    node* temp = new node(x);
    temp->next = head;
    tail->next = temp;
}
int LinkedList::pop_back()
{
    int popped;
    if(this->empty())
    {
        std::cout << "Stack underflow\n";
    }
    else if (this->_size == 1)
    {
        popped = this->first->data;
        delete first;
        first = last = NULL;
        _size--;
    }
    else
    {
        popped = last->data;
        node* temp = first;
        while (temp->next != last)
        {
            temp = temp->next;
        }
        delete last;
        last = temp;
        last->next = NULL;
        _size--;
    }
    return popped;
}
int LinkedList::pop_front()
{
    int popped{-1};
    if(this->empty())
    {
        std::cout << "stack underflow\n";
    }
    else if(_size == 1)
    {
        popped = this->first->data;
        delete first;
        first = last = NULL;
        _size--;
    }
    else
    {
        popped = this->first->data;
        node* temp = first;
        first = first->next;
        delete temp;
        _size--;
    }
    return popped;
}
void LinkedList::push_back(int x)
{
    if(this->empty())
    {
        this->first = new node(x);
        this->last = this->first;
    }
    else
    {
        this->last->next = new node(x);
        this->last = this->last->next;
    }
    _size++;
}
void LinkedList::push_front(int x)
{
    if(this->empty())
    {
        this->first = new node(x);
        this->last = this->first;
    }
    else
    {
        node* temp = new node(x);
        temp->next = first;
        first = temp;
    }
    _size++;
}
void LinkedList::remove(int index)
{
    if (index == 0)
    {
        this->pop_front();
        return;
    }
    else if((index >= _size) || (index < 0))
    {
        std::cout << "invalid index\n";
        return;
    }
    node* back = NULL;
    node* itr_list = this->first;
    int itr_index = 0;
    while ((itr_list->next) && (itr_index < index))
    {
        back = itr_list;
        itr_list = itr_list->next;
        itr_index++;
    }
    if (itr_list == this->last)
    {
        back->next = NULL;
        itr_list = NULL;
        delete itr_list;
        _size--;
    }
    else if(itr_list)
    {
        back->next = itr_list->next;
        delete itr_list;
        _size--;
    }
}
void LinkedList::reverse()
{
    if(empty()){return;}
    node* itr = first;
    node* hold = first->next;
    first->next = nullptr;
    while (hold)
    {
        node *temp = hold->next;
        hold->next = itr;
        itr = hold;
        hold = temp;
    }
    first = itr;
}
std::ostream& operator<<(std::ostream& os,const LinkedList& that)
{
    node* it = that.first;
    int index = 0;
    os << "("<< that._size << ") ";   
    while (it)
    {
        os << "[" << it->data << "]->";
        it = it->next;
    }
    os << "[NULL]\n";
    return os;
}