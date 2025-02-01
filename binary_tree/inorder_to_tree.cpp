#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node (int value){
        data=value;
        left=NULL;
    }
};
int search(int inorder[], int st, int end, int curr)
{
    for(int i=st; i<=end; i++)
    {
        if(inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;


}
Node * tree(int preorder[], int inorder[], int st, int end)
{
    // st=inorder[0];
    // end=inorder[4];

    static int idx=0;
    if(st>end)
    {
        return NULL;
    }

    int curr=preorder[idx];

    Node * node=new Node(curr);
    if(st==end)
    {
        return node;
    }

    int pos=search(inorder, st, end, curr);

    node->left= tree(preorder, inorder, st, pos-1);
    node->right=tree(preorder, inorder,pos+1,end);

}

void printinorder(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}
int main()
{
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    Node* root= tree(preorder,inorder,0,4);

    printinorder(root);

    return 0;
}