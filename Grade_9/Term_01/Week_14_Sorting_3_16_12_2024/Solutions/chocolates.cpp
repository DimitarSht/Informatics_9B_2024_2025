#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int arr[n], dist[n];
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
    }
    cin >>m;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int i = n - 1; i > m - 2; i--)
    {
        dist[i] = arr[i] - arr[i - m  + 1];
    }
    int mindist = 99999;
    for(int i = n - 1; i > m - 2; i--)
    {
        if(dist[i] < mindist) mindist = dist[i];
    }
    cout << mindist;
    return 0;
}
