#include <iostream>
#ifndef _cQueue_
#define _cQueue_
const int SIZE{5};
class cQueue
{
private:
	int arr[SIZE];
	int head;
	int tail;
	int _size;
public:
	cQueue();
	int size(){return _size;}
	bool isFull(){return ((size() == SIZE)? true : false);}
	bool isEmpty(){return ((head == -1 && head == -1)? true : false);}
	void enqueue(int x);
	int dequeue();
	void display();
friend std::ostream& operator << (std::ostream& os,const cQueue& that);
};
#endif 