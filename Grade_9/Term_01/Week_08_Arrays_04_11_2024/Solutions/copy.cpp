#include<iostream>
using namespace std;
int main()
{
    int sz;
    cin>>sz;
    int arr1[sz], arr2[sz];
    for(int i = 0; i < sz; i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0; i < sz; i++)
    {
        arr2[i] = arr1[i];
    }
    cout<<"Array 1: ";
    for(int i = 0; i < sz;i ++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"\nArray 2: ";
    for(int i = 0; i < sz;i ++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}
