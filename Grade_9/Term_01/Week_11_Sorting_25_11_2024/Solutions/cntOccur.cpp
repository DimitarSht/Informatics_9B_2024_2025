#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    int target, cnt = 0;
    cin>>target;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
