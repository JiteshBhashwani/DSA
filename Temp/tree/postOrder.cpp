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
    temp->lNode = nullptr;
    temp->rNode = nullptr;
    return temp;
}
void print(node* ptr)
{
    if(ptr)
    {
        print(ptr->lNode);
        print(ptr->rNode);
        cout << ptr->data << " ";
    }
}

int main()
{
    node* one =  make_node(1);
    cout << "hell world\n";
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