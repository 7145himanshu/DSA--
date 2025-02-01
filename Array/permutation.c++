#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int permute(vector<int> v, int l, int r)
{
    cout << "Permute : " << endl;
    int i;
xyz:
    for (i = 0; i < v.size(); i++)
    {
        if (v.at(0) == l && v.at(i) == r)
        {
            cout << "end!!";
            break;
        }
        swap(v.at(i), v.at(i + 1));
        // cout<<"--"<<i;
        display(v);
        if (i == v.size() - 2)
        {
            i = 0;
            goto xyz;
        }
    }
}
int main()
{
    int n, m = 5, elem;
    vector<int> vec;
    cout << "Enter the size of vec : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> elem;
        vec.push_back(elem);
    }
    permute(vec, vec[0], vec[vec.size() - 1]);
    return 0;
}