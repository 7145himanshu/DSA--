#include<iostream>

#include<stack>

using namespace std;

int cqueue[5];
int front= -1, rear =-1, n=5;

void insertcq(int val)
{
    if ((front == 0 && rear == n-1 ) || (front == rear+1))
    {
        cout<<"Queue is overflow \n";
        return;
    }
    if(front == -1)
    {
        front = 0;
        rear = 0; 
    }
    else 
    {
        rear =rear+1;
    }
cqueue[rear] = val ;
}
// sgegfiwhwihilu
void deletecq()
{
    if (front == -1 )
    {
        cout<<"Queue underflow \n";
        return;
    }
    cout<<"Element deleted fom queue is : "<<cqueue[front]<<endl;

    if (front == rear )
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if(front == n-1)
        {
            front=0;
        }
        else
        {
            front = front +1;
        }
    }
}

void displaycq()
{
    int f =front , r =rear;
    if (front == -1)
    {
        cout<<" Queue is empty"<<endl;
        return;
    }
    cout<<"Queue Elements are : \n";

    if(f <= r)
    {
        while(f <= r)
        {
            cout<<cqueue[f]<<" ";
            f++;
        }
    }
    else
    {
        while (f <=n - 1 )
        {
            cout<<cqueue[f]<<" ";
            f++;
        }
        f=0;
        while(f <=r)
        {
            cout<<cqueue[f]<<" ";
            f++;
        }
    }
    cout<<endl;
}

int main()
{
    int ch, val;
    cout<<"1) Insert \n ";
    cout<<"2) Delete \n";
    cout<<"3) Display\n";
    cout<<"4) Exit \n";

    do
    {
        cout<<"Input for insertion :" <<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
            cout<<" Insert for insertion :"<<endl;
            cin>>val;
            insertcq(val);
            break;

            case 2:
            deletecq();
            break;

            case 3:
            displaycq();
            break;

            case 4:
            cout<<"Exit \n";
            break;

            default:
            cout<<"Incorrect ! \n";
        }
    } while (ch !=4);

    return 0;
    



}