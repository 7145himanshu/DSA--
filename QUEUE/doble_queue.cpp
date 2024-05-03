#include<iostream>
using namespace std;

int front=-1;
int rear=-1;
int size=21;
int dqueue[21];

void finsert()
{
     if((front==0) && (rear==size-1))
     {
          cout<<"Queue is OVERFLOW";
     }
     
     // if (front==-1)
     // {
     //      int elem;
     //      cout<<"ENTER ELEMENT TO INSERT FROM FRONT :";
     //      cin>>elem;
     //      cout<<"\n";

     //      front++;
     //      rear=0;
     //      dqueue[front]=elem;

// from the front of the elemnt of the sa
          
     
     if(front==0)
     {
          cout<<"\nINSERTION FROM FRONT NOT POSSIBLE";
     }
     else
     {
          int elem;
          cout<<"ENTER ELEMENT TO INSERT FROM FRONT :";
          cin>>elem;
          cout<<"\n";

          front--;
          // rear=0;
          dqueue[front]=elem;
     
     }
}

void rinsert()
{
     if((front==0) && (rear==size-1))
     {
          cout<<"Queue is OVERFLOW";
     }
     else
     {
          int elem;
          cout<<"ENTER ELEMENT TO INSERT FROM LAST :";
          cin>>elem;
          cout<<"\n";

          rear++;
          front=0;
          dqueue[rear]=elem;
     }

}

void fdelete()
{
     if((front==-1)||(front==rear+1))
     {
          cout<<"QUEUE IS UNDERFLOW...!!";
     }
     else
     {
          cout<<dqueue[front]<<" REMOVED SUCCESSFULLY....!!\n";
          front++;
     }
     if(front==rear+1)
     {
          front=-1;
          rear=-1;
     }
}

void rdelete()
{
     if((front==-1)||(front==rear+1))
     {
          cout<<"\n QUEUE IS UNDERFLOW...!!";
     }
     else
     {
          cout<<dqueue[rear]<<" REMOVED SUCCESSFULLY...!!\n";
          rear--;
     }
     if(front==rear+1)
     {
          front=-1;
          rear=-1;
     }
}
void display()
{
     if((front==-1)||(front==rear+1))
     {
          cout<<"QUEUE IS UNDERFLOW...!!";
     }
     else
     {
          int i=front;
          cout<<"TOTAL ELEMENT : ";
          for(;i<=rear;i++)
          {
               cout<<" "<<dqueue[i];
          }
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
          cout<<"\n The First Element is : "<<dqueue[front]<<endl;
     }
}

int main()
{
     cout<<"\n\n.......................QUEUE IMPLEMENTATION...................... "<<endl;

     cout<<"\n\tQUEUE OPERATIONS :"<<endl;
     cout<<"1.INSERT from FRONT";
     cout<<"\n2.INSERT from LAST";
     cout<<"\n3.DELETE from FRONT";
     cout<<"\n4.DELETE from LAST";
     cout<<"\n5.PEEK";
     cout<<"\n6.DISPLAY";
     cout<<"\n7.EXIT";
     int opt;
     again:
     cout<<"\n\n\tSelect the Operations (1-4) :";
     cin>>opt;
     switch (opt)
     {
     case 1:
          finsert();
          goto again;
     
     case 2:
          rinsert();
          goto again;
     case 3:
          fdelete();
          goto again;
     
     case 4:
          rdelete();
          goto again;

     case 5:
          peek();
          goto again;
     
     case 6:
          display();
          goto again;
     
     case 7:
          cout<<"\n\t\t!!...OPERATION EXIT SUCCESFULLY....!!";
          break;
     
     default:
          cout<<"\n\t\t...!!..INVALID INPUT...!!..";
          goto again;
     }


return 0;
}