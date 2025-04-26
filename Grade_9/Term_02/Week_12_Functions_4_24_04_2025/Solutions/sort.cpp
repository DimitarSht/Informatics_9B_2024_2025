#include<iostream>
using namespace std;

void sorting(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void input(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}

void output(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr, n);
    sorting(arr, n);
    output(arr, n);
    return 0;
}
