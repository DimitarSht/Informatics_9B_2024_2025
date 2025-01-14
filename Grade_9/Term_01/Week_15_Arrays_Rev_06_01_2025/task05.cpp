#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i+=4)
    {
        swap(arr[i], arr[i+2]);
    }
    for(int i = 1; i < n; i+=4)
    {
        if(arr[i] > arr[i+2])
        {
            arr[i] = arr[i] - arr[i+2];
            arr[i+2] = 0;
        }
        else if(arr[i] < arr[i+2])
        {
            arr[i+2] = arr[i+2] - arr[i];
            arr[i] = 0;
        }
        else
        {
            arr[i] = 0;
            arr[i+2] = 0;
        }
    }

    return 0;
}
