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

void postorder(struct Node * root)
{
    if(root== NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
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
    /*
                   1
                /    \
               2      3
             /  \    /  \
            4    5  6    7
    */
   postorder(root);
    return 0;
}