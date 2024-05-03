#include<stdio.h>
#include<stdlib.h>

int size=15;
int top=-1;
float arr[15];
// int i=0;

int isEmpty()
{
     if (top==-1)
     {
          printf("Stack is Empty !!\n");
     }
     else
     {
          printf("Stack contain Element");
     }
}

int isFull()
{.

     if (top==size-1)
     {
          printf("Stack is Full\n");
          // return;
     }
     else{
          printf("Stack is not full");
     }
}

void push()
{
     float elem;
     if (top==size-1)
     {
          printf("Stack is Full!! Unable to insert Value\n");
     }
     else 
     {
          printf("\n\nEnter the Element :- ");
          scanf("%f",&elem);
          top++;
          arr[top]=elem;
     
     }
}
void pop()
{
     if (top==-1)
     {
          printf("Stack is Underflow!! Element Not Found\n");
     }
     else
     {
          top--;
          printf("TOP Element removed....!");
     }
}
void peek()
{
     if (top==-1)
     {
          printf("Stack is Empty!!\n");
     }
     else
     {
          printf("Top Value is : %f\n",arr[top]);
     }
}

void display()
{
     int i;
     if(top==-1){
          printf("Stack is Empty!!\n");
     }
     else{
          printf("Total Elem are : \n");
          for(i=top;i>=0;i--)
          {
               printf("%f\n",arr[i]);
          }
     }
}
int main()
{
     int opt;
     // float elem;
     printf("..............STACK IMPLEMENTATION...............");

     printf("\n\t OPERATIONS :\n");
     printf("1.INSERT ELEMENT\n");
     printf("2.DELETE ELEMENT\n");
     printf("3.LAST ELEMENT\n");
     printf("4.DISPLAY ALL ELEMENTS\n");
     printf("5.CHECK STACK IS FULL\n");
     printf("6.CHECK STACK IS EMPTY\n");
     printf("7.EXIT..");

     again:

     printf("\n \t\t ENTER YOUR OPERATIONS (1-7): ");
     scanf("%d",&opt);

     switch (opt)
     {
     case 1:
          push();
          goto again;

     case 2:
          pop();
          // printf("TOP element is removed...!!");
          goto again;

     case 3:
          peek();
          goto again;

     case 4:
          display();
          goto again;

     case 5:
          isFull();
          goto again;

     case 6:
          isEmpty();
          goto again;

     case 7:
          printf("Operation Exit...!");
          break;

     default:
          printf(" INVALID COMMAND...!\n\n");
          goto again;
     }

return 0;     
}