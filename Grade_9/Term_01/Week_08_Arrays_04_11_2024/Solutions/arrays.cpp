#include<iostream>
using namespace std;
int main()
{
    int arr[100000] = {0}; /// всички клетки са със стойност 0

    int arr2[10]; /// празен масив
    for(int i = 0; i < 10; i++)
    {
        cin>>arr2[i];
    }

    for(int i = 0; i < 10; i++)
    {
        cout<<arr2[10 - i - 1]<<" ";
    }
    cout<<endl;
    for(int i = 9; i >= 0; i--)
    {
        cout<<arr2[i]<<" ";
    }




}
