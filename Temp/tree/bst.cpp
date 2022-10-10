#include<bits/stdc++.h>
using namespace std;
/*
Properties of a binary search tree:

1. All nodes of the left subtree are lesser than the node itself.
2. All nodes of the right subtree are greater than the node itself.
3. Left and Right subtrees are also binary trees.
4. There are no duplicate nodes.
5. The InOrder traversal of a binary search tree gives an ascending sorted array. And the last p1 is of utmost importance to us. And that is what we use the most to check if a binary tree is a binary search tree or not. So, basically, we’ll check if a binary tree is a binary search tree or not by making an InOrder Traversal in the tree and analyzing its order. I have attached the source code below. Follow it as we proceed.
*/
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
bool testprint(node* ptr)
{
    static node* prev = nullptr;
    if(ptr)
    {
        if(!testprint(ptr->lNode)) return false;
        if(prev && ptr->data <= prev->data) return false;
        prev = ptr;
        return testprint(ptr->rNode);
    }
    else return true;
}
bool isPalindrome(list<int> head) {
        stack<int> check;
        while(!head.empty())
        {
            if(!check.empty() && head.front() == check.top()) check.pop();
            else check.push(head.front());
            head.pop_front();
        }
        return check.empty();
    }
int sum(int x)
{
    if(!x) return x;
    return x + sum(x-1);
}
int main()
{
    node* p1 = make_node(3);
    node* p2 = make_node(2);
    node* p3 = make_node(4);
    node* p4 = make_node(1);
    node* p5 = make_node(5);

    p1->lNode = p2;
    p2->lNode = p4;
    p1->rNode = p3;
    p3->rNode = p5;
    int summ{0};   
    for (size_t i = 0; i < 10; i++)
    {
        summ+=i;
        cout << sum(i) << " " << summ << " " << ((i*(i+1))/2) << endl;
    }
    
}