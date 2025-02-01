#include<iostream>
using namespace std;

void prime(int *arr,int n)
{
    for(int i=2; i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                arr[i]=1;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<" ";
        }
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    prime(arr,n);

    return 0;
}