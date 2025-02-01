#include <iostream>
using namespace std;

    int arr[NULL];  

    int total_size ;
    int used_size ;



int arr_create(int arr[],int m,int n)
{
    // cout << "Enter Total size :";
    // cin >> total_size;
    arr[m];

    // cout << "enter the size : ";
    // cin >> used_size;
    // int n= used_size;
    // cout << used_size;

    for (int i = 0; i <= n; i++)
    {
        cout << "\nenter "<< i<< " : ";
        cin >> arr[i];
    }
    return n;
}
void display(int arr[],int m)
{
    // m=used_size;
    // cout<<m;
    cout << "\n Element = ";
    for (int i = 0; i <= m; i++)
    {
        cout << " "<<arr[i];
    }
}

int insert(int arr[],int value, int ind, int used_size)
{
    cout<<used_size;
    int j=0;
    for(j=used_size; j >=ind; j--)
    {
        arr[j+1]=arr[j];
    }

    cout<<"/"<<used_size;
    arr[j]=value;
    return used_size++;
}
int search(int value){
    for(int i=0; i<=used_size; i++){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;
}

int main()
{

    // }
    cout << "Enter Total size :";
    cin >> total_size;
    arr[total_size];

    cout << "enter the size : ";
    cin >> used_size;
    // int n= used_size;
    // cout << used_size;

    arr_create(arr,total_size, used_size);
    // cout<<used_size;
    display(arr,used_size);
    cout<<"\n update array : ";
    insert(arr,88,1,used_size);
    display(arr,used_size);

    
    cout<<"\n"<<search(88)<<endl;

    return 0;
}
