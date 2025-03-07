#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int table[n][n], arr[n*n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];
        }
    }

    for(int i = 0, x = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++, x++)
        {
            arr[x] = table[i][j];
        }
    }

    for(int i = 0; i < n * n - 1; i++)
    {
        for(int j = 0; j < n * n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0, x = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++, x++)
        {
            table[i][j] = arr[x];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
