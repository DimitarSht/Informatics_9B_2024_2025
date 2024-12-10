#include<iostream>
using namespace std;
int main()
{
    int n, m, sum1, sum2;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[mini])
            {
                mini = j;
            }
        }
        if(i != mini)
        {
            swap(a[i], a[mini]);
        }
    }
    for(int i = m; i < n; i++)
    {
        sum1 += a[i];
    }
    for(int i = 0; i < n-m; i++)
    {
        sum2 += a[i];
    }
    cout<<sum1-sum2;
    return 0;
}
