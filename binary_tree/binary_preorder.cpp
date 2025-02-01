#include <iostream>
using namespace std;

struct Node
{
    int data;

    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node * root)                   //preorder function 
{   
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
}

int main()
{
    struct Node *root = new Node(1); // root node

    root->left = new Node(2); // level 1 node
    root->right = new Node(3);

    root->left->left = new Node(4); // level 2 node
    root->left->right = new Node(5);

    root->right->left = new Node(6); // level 4 ( leave node )
    root->right->right = new Node(7);

    cout<<"hello";
    preorder(root);
    /*
                   1
                /    \
               2      3
             /  \    /  \
            4    5  6    7
    */

    return 0;
}