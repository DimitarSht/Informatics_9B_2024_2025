#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
    for(int i = 1; i < n - 1; i++)
    {
        sum += a[i];
    }
    cout << sum / (double)(n - 2);
    return 0;
}
