#include<iostream>
#include<stack>

using namespace std;

int que[5];
int n=5, front=-1,rear=-1;


void insert_f(int val)
{
     if (front<0)
     {
          front--;
          que[front]=val;
          cout<<"inserted_F";
          break;
     }
     else if (front==-1)
     {
          front++;
          que[front]=val;
          cout<<++;
          cout<<"inserted_F";

          if (rear==-1)
          {
               rear++;
          }
          break;
     }
     else
     {
          cout<<"no empty space...!!"
     }
}

void insert_L(int val)
{
     
}