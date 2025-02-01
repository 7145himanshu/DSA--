#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int display(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1;
    int elem;

    for(int i=0; i<5; i++)
    {
        // cout<<"Enter : ";
        // cin>>elem;
        vec1.push_back(i);
    }
    cout<<"-"<<vec1.at(0)<<endl;
    cout<<vec1.at(vec1.size()-1);
    // display(vec1);
    return 0;
}
