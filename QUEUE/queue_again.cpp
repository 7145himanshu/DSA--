#include<iostream>
// #include <stack>

using namespace std;

int queue[11];
int maxsize=11;
int front=-1;
int rear=-1;

void insert()
{
     if (rear == maxsize-1 && front==0) 
     {
          cout<<"\nQUEUE IS OVERLFLOW"<<endl;  
     }
     else
     {    
          int elem;
          cout<<"Enter the ELement :";
          cin>>elem;
          rear++;
          front=0;
          queue[rear]=elem;
     }
}

void Delete()
{
     if ((front==-1) || (front==rear+1))
     {
          cout<<"\nQUEUE is underflow"<<endl;
     }
     else
     {
          cout<<queue[front]<<" Removed Succesfully";
          front++;
     }
     if (front==rear+1)
     {
          front=-1;
          rear=-1;
     }
     /*if(front=maxsize-1)
     {
          front=0;
     }*/
}
void display()
{
     if ((front==-1)||(front==rear+1))
     {
          cout<<"\nNO ELEMENT FOUND...!";
     }
     else
     {
          cout<<"\nTOTAL ELEMENT ARE : ";
          int i=front;
          for(;i<=rear;i++)
          {
               cout<<" "<<queue[i];
          }
          cout<<"\n";
     }
}
void peek()
{
     if ((front==-1)|| (front==rear+1))
     {
          cout<<"\nNO ELEMENT FOUND...!";
     }
     else
     {
          cout<<"\n The First Element is : "<<queue[front]<<endl;
     }
}


int main()
{
     cout<<"\n\n.......................QUEUE IMPLEMENTATION...................... "<<endl;

     cout<<"\n\tQUEUE OPERATIONS :"<<endl;
     cout<<"1.INSERT";
     cout<<"\n2.DELETE";
     cout<<"\n3.PEEK";
     cout<<"\n4.DISPLAY";
     cout<<"\n5.EXIT";
     int opt;
     again:
     cout<<"\n\n\tSelect the Operations (1-4) :";
     cin>>opt;
     switch (opt)
     {
     case 1:
          insert();
          goto again;
     
     case 2:
          Delete();
          goto again;
     
     case 3:
          peek();
          goto again;
     
     case 4:
          display();
          goto again;
     
     case 5:
          cout<<"\n\t\t!!...OPERATION EXIT SUCCESFULLY....!!";
          break;
     
     default:
          cout<<"\n\t\t...!!..INVALID INPUT...!!..";
          goto again;
     }
return 0;
}