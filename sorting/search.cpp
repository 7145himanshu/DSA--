#include<iostream>
#include<chrono>
using namespace std;

int max_value(int arr[], int n)
{
    int i=0;
    int mx=arr[i];
    // cout<<max;
    for(;i<=n;i++)
    {
        // if(max<arr[i])
        // {
        //     max=arr[i];
        //     cout<<i<<endl;
        // }
        mx= max(mx, arr[i]);
        cout<< mx << endl;
    }
    return max;
}

int linearsearch(int arr[],int value,int n)
{
    for(int i=0; i<=n;i++){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr[],int value, int n)
{
    int s =0;
    int e = n;

    while(s<=e)
    {
        int m = (s+e)/2;

        if (value == arr[m]){
            return m;
        }
        else if(value < arr[m])
        {
            e=m-1;
        }
        else if(value > arr[m])
        {
            s=m+1;
        }
        // cout<<m;
    }
    return -1;
}
// {
//     int mid=(0+n)/2;

//     if(arr[mid]==value){
//         return mid;
//     }
//     else if(value>mid[arr]){
//         int mid2=(mid+n)/2;
//         if(arr[mid2]==value)
//         {
//             return mid2;
//         }
//         else if(value>arr[mid2])
//         {
//             for(; mid2<=n;mid2++)
//             {
//                 if(arr[mid2]==value)
//                 {
//                     return mid2;
//                 }
//             }
//         }
//         else{
//             for(int i =mid; i<mid2; i++)
//             {
//                 if(arr[i]==value)
//                 {
//                     return i;
//                 }
//             }

//         }
//     }
//     else
//     {
//         int mid2=(mid+n)/2;
//         if(arr[mid2]==value)
//         {
//             return mid2;
//         }
//         else if(value< arr[mid2])
//         {
//             for(int i=mid2; i>=0;i--)
//             {
//                 if(arr[i]==value)
//                 {
//                     return i;
//                 }
//             }
//         }
//         else{
//             for(int i =mid; i<=mid2; i--)
//             {
//                 if(arr[i]==value)
//                 {
//                     return i;
//                 }
//             }

//         }
//     }
//     return -1;
// }


int main(){
    auto start = std::chrono::high_resolution_clock::now();
    int n=20;
    int arr[n]={2,4,5,6,7,8,9,11,32,33,45,66,77,88,89,90,92,93,95,99,100};

    int k=5;
    int rr[k]={-3,0,-1,5,-7,1};
    // cout<<Linearsearch(arr,9ṇṇ9,n);
    cout<<max_value(rr,k);

    auto end= std::chrono::high_resolution_clock::now();
    auto duration= std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout <<"\nExecution time : "<<duration.count()<<" Micros"<<std::endl;

    return 0;
}