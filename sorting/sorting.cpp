#include<iostream>
#include<chrono>
using namespace std;



void display(int arr[], int n)
{
    cout<<"ELEMENT : ";
    for(int i=0; i<=n; i++)
    {
        cout<<" "<<arr[i];
    }
}

int sel_sort(int arr[],int n)
{
    // int small= arr[0];
    int i,j;
    for(j=0;j<n;j++)
    {
        for (i=j+1; i<=n; i++)
        {
            // if (arr[i]>arr[j])           #descending
            if (arr[i]<arr[j])
            {
                // small=arr[i];
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    // display(arr,n);
    // return small;
}

void bub_sort(int arr[], int n)
{
    int i ,j;

    for(j=n; j>=0; j--)
    {
        for(i=0; i<=j; i++)
        {
            if(arr[i]>arr[i+1])
            {
                // cout<<" " <<i;
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}

void inser_sort(int arr[], int n)
{
    for(int i =1; i<=n; i++)
    {
        int cur=arr[i];
        int j=i-1;
        while(arr[j]>cur && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
            cout<<j;
        }
        arr[j+1]=cur;
    }
}
int main()
{
    auto start = std::chrono::high_resolution_clock::now();

    int n=5;
    int arr[n]={12,4,7,8,1,9};

    // bub_sort(arr,n);
    // sel_sort(arr,n);
    inser_sort(arr,n);
    display(arr, n);

    auto end= std::chrono::high_resolution_clock::now();
    auto duration= std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout <<"\nExecution time : "<<duration.count()<<" Micros"<<std::endl;
    
    return 0;
}