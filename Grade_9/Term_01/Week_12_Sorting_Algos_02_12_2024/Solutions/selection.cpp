#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    int arr[] = {11, 10, 9, 8, 7, 6};

    int min_idx;
    for(int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if(min_idx != i)
        {
            swap(arr[i], arr[min_idx]);
        }
    }

    /// Sorted array - 6, 7, 8, 9, 10, 11 
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

