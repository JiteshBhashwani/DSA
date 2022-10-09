
#include <iostream>

class Array
{
private:
    int* data;
    int size;
    int cap;
public:
    Array(int cap = 0,int size = 0);
    Array(int* arr,int size);
    Array(const Array& that);
    ~Array();

    void fill(int x);
    void fill(int x,int n);
    void fill_inc(int f, int l);

    int at(int x){return data[x];}
    int front(){return data[0];}
    int back(){return data[size-1];}
    bool empty(){return size;}
    int getSize(){return size;}
    int operator[](int index){return data[index];}

friend std::ostream& operator<< (std::ostream& os,const Array& that);

};
