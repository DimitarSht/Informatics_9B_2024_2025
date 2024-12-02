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
    cout<<"Original array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i = 0; i < n/2; i++)
    {
//        int tmp = arr[n - i - 1];
//        arr[n - i - 1] = arr[i];
//        arr[i] = tmp;

        swap(arr[i], arr[n-i-1]);
    }




    cout<<"\nReversed array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
