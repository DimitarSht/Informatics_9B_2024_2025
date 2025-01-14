#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unsigned int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int MIN_diff = 99999, MAX_diff = -1, current_diff = 0;
    for(int i = 0; i < n - 1; i++)
    {
        current_diff = abs(arr[i] - arr[i+1]);
        if(current_diff <= MIN_diff)
        {
            MIN_diff = current_diff;
        }
        if(current_diff >= MAX_diff)
        {
            MAX_diff = current_diff;
        }
    }

    cout<<MIN_diff<<" "<<MAX_diff<<endl;
    return 0;
}
