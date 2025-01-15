#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int lens[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        lens[i] = 99;
    }
    for(int i = 0; i < n; i++)
    {
        if(i == 0) lens[i] = 0;
        else
        {
            for(int j = i - 1; j > -1; j--)
            {
                if(arr[j] + j >= i && lens[j] + 1 < lens[i]) lens[i] = lens[j] + 1;
            }
        }
    }
    cout << lens[n - 1];
    return 0;
}
