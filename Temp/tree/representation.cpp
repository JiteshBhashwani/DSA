#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* lNode;
    node* rNode;
    node(int data):data{data}{}
};
/*
Preorder traversal
    Root-> leftSubTree -> rightSubTree

Postorder traversal
    Root-> rightSubTree -> leftSubTree

Inorder traversal
    leftSubTree -> Root -> rightSubTree

*/
int main()
{
    cout << "hello world\n";
}