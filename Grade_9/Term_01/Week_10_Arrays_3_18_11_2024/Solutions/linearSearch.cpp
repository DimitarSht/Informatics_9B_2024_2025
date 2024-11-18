#include<iostream>
using namespace std;
int main()
{
    /// Търсим дали target се съдържа в arr
    /// Ако намерим target, ще запазим индекса му в променливата index
    /// Ако не го намерим, ще запазим -1 в index
    /// Накрая принтираме стойността на index
    int n, target, index = -1;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the searched element: ";
    cin>>target;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            index = i;
        }
    }

    cout<<index<<endl;

    return 0;
}