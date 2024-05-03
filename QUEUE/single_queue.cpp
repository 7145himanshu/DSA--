#include<iostream>
#include<stack>

using namespace std;

int que[5];
int front=-1, rear=-1, n=5; 

void enqueue (int val)
{
     if (rear==n)
     {
          cout<<"Queue is overflow";
     }
     else
     {
          rear++;
          que[rear]=val;
          cout<<"\ninsert!!!";

          if (front<0)
          {
               front=0;
          }
     }
     
}
void dequeue ()
{
     if (front== -1 || rear== -1  || front == rear+1)
     {
          cout<<"empty Queue !!";
     }
     else
     {
          front++;
          cout<<"removed.!";

     }
     if (front==rear+1)
     {
          front=-1;
          rear=-1;
     }
     
}
void isempty()
{
     if (rear==-1)
     {
          cout<<"empty Queue!!";
     }
     else
     {
          cout<<"contain data";
     }
}
void isfull()
{
     if(rear>=n)
     {
          cout<<"Queue is full";
     }
     else
     {
          cout<<"queue not Full";
     }
}
void lastval()
{
     if (rear==-1)
     {
          cout<<"queue is empty";
     }
     else
     {
          cout<<"last-",que[rear];
     }
}
void firstval()
{
     if (rear==-1)
     {
          cout<<"queue is empty";
     }
     else
     {
          cout<<que[0];
     }
}
void display()
{
     if (rear==-1)
     {
          cout<<"queue is empty";
     }
     else
     {
          int x=front;
          cout<<"\n";

          while (x< rear+1)
          {
               cout<<que[x];
               cout<<" ";
               x++;
          }
     }
}
int main()
{
     enqueue(20);
     enqueue(22);
     enqueue(23);
     enqueue(24);
     enqueue(24);
     enqueue(24);
     enqueue(24);

     display();
     cout<<"\nlater\n";

     dequeue();
     dequeue();
     dequeue();
     dequeue();
     dequeue();
     dequeue();
     dequeue();

     display();
     cout<<front;
     cout<<rear;

     cout<<"AFTER";
     enqueue(01);
     enqueue(01);

     cout<<front;
     cout<<rear;
     return 0;
}