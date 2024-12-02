#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    int arr[] = {11, 10, 9, 8, 7, 6};

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i- 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    /// Sorted array - 6, 7, 8, 9, 10, 11 
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

