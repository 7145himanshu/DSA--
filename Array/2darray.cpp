#include <iostream>
#include <conio.h>
using namespace std;

void insert(int arr[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "\nelem -" << i << "," << j << " :";
            cin >> arr[i][j];
        }
    }
}

void display(int arr[][100], int n, int m)
{
    cout << "\nMATRIX: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << " ";
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

void search(int arr[][100], int n, int m)
{
    int value;
    cout << "\nEnter the element to found : ";
    cin >> value;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == value)
            {
                cout << "\nFOUND at : (" << i << ", " << j << ")";
            }
        }
    }
}

void spiral_display(int arr[][100], int n, int m)
{
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        
    }
    for (int i = row_start; i < n; i++)
    {
        // for (int j =)
    }
}
int main()
{

    int r = 2, c = 2;

    int arr[100][100];
    insert(arr, r, c);

    display(arr, r, c);

    search(arr, r, c);

    return 0;
}