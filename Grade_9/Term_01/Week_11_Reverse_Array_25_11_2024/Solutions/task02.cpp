#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    int MIN = arr[0], MAX = arr[0], minIndex, maxIndex;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < MIN)
        {
            MIN = arr[i];
            minIndex = i;
        }
        if(arr[i] > MAX)
        {
            MAX = arr[i];
            maxIndex = i;
        }
    }

    cout<<minIndex<<" "<<maxIndex<<endl;
    return 0;
}
