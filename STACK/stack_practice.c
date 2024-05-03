#include<stdio.h>
#include<stdlib.h>

int stk[10];
int top=-1;
int max=10;

void push()
{
     int elem;

     if (top==max)
     {
          printf("STACK IS FULL...!!");
     }
     else
     {
          printf("Enter the element :");
          scanf("%d",&elem);
          top++;
          stk[top]=elem;
          
     }
}

void pop()
{
     if(top==-1)
     {
          printf("Stack is Empty...!!");
     }
     else
     {
          top--;
     }
}
void display()
{
     // printf("top elem :%d",stk[top]);
     int i=top;
     for(;i>=0;i--)
     {
          printf("%d\n",stk[i]);
          
     }
}
// void isfull()
// {
//      // if ()
//      // {
//           // return TRUE;
//      // }

// }

// void isempty()
// {
//      // pass;
// }



int main()
{
     push();
     push();
     push();
     // push();
     // push();
     
     display();
     return 0;
}