#include<iostream>
using namespace std;
int main()
{
    /// Общи елементи на два масива
    int sz1, sz2;
    cin>>sz1>>sz2;
    int arr1[sz1], arr2[sz2];
    for(int i = 0; i < sz1; i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0; i < sz2; i++)
    {
        cin>>arr2[i];
    }
    for(int i = 0; i < sz1; i++)
    {
        for(int j = 0; j < sz2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                arr1[i] = 0;
                arr2[j] = 0;
            }
        }
    }
    for(int i = 0; i < sz1; i++)
    {
        if(arr1[i] != 0) cout<<arr1[i]<<" ";
    }
    for(int i = 0; i < sz2; i++)
    {
        if(arr2[i] != 0) cout<<arr2[i]<<" ";
    }
    return 0;
}
