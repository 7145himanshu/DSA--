#include<stdio.h>
#include<stdlib.h>

int top=-1;
int maxsize=11;
int arr[11];

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (top == maxsize-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int push(int val)
{
    // int top=-1;
    if(isFull(arr[11]))
    {
        printf("Stack is Overflow");
    }
    else
    {
        top++;
        arr[0]=val;      
    }
}
int pop(int val)
{
    if(isEmpty)
    {
        printf("Stack is Underflow");
        return -1;
    }
    else
    {
        top--;
        int val = arr[top];
    
        return val;
    }
}   

int main()
{
    int val,i;
    push(val=2);
    // push(val=4);
    // push(val=4);
    // push(val=4);
    pop(val=2);

    for(i=0; i<12;i++)
    {
        printf("%d",arr[i]);
    }

return 0;
}







// #include<iostream>
// #include<stack>
// using namespace std;

// int main()
// {
//     // stack <string> t1;
//     // t1.push("c");
//     // t1.push("cv");
//     // t1.push("fb");
//     // // t1.pop();

//     // cout <<t1.top();
//     stack <int> table;
//     for(int i=1;i<10; i++)
//     {
//         table.push(i);
//     }
    
//     table.push(188);
    

//     cout<<"total ="<<table.top()<<"\n";

//     while(!table.empty())
//     {
//         cout <<table.top()<<" ,";
//         table.pop();
//     }
//     cout<<"\nnow= ";
//     cout<<table.top();
    


// return 0;     
// }