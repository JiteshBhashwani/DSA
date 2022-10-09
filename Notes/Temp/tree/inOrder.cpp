#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *lNode;
    node *rNode;
    node(int data) : data{data},lNode{nullptr},rNode{nullptr}{}
};
node* make_node(int x)
{
    node* temp = new node(x);
    return temp;
}
void print(node* ptr)
{
    if(ptr)
    {
        print(ptr->lNode);
        cout << ptr->data << " ";
        print(ptr->rNode);
    }
}

int main()
{
    node* one =  make_node(1);
    node* two = make_node(2);
    node* three = make_node(3);
    node* four = make_node(4);
    node* five = make_node(5);
    one->lNode = two;
    two->lNode = four;
    one->rNode = three;
    three->rNode = five;   


    print(one);


}