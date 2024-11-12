#include<iostream>
using namespace std;
int main()
{
    /// Въвеждаме размер и елементи от клавиатурата
    int n; /// размера на масива
    cin>>n;
    int arr[n]; /// създали сме вече нашия масив
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0, cnt = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    sum;
    cout << sum << " ";
    for(int del = 2; del <= sum; del++)
    {
        for(int i = 2; i <= sum / 2; i++)
        {
            if(sum%i == 0)
            {
                cnt++;
            }
        }
        if(sum%del == 0 && sum%(del*del) != 0
                && cnt == 0)
        {
            cout << del << " ";
        }
        cnt = 0;
    }


    return 0;
}
