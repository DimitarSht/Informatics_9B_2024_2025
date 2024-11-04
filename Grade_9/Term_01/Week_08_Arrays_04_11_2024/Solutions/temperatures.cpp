#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int temperatures[N];
    for(int i = 0 ; i < N; i++)
    {
        cin>>temperatures[i];
    }
    /// MIN, MAX
    int MIN = 100, MAX = -100;
    for(int i = 0;i < N; i++)
    {
        if(temperatures[i] < MIN)
        {
            MIN = temperatures[i];
        }
        if(temperatures[i] > MAX)
        {
            MAX = temperatures[i];
        }
    }

    /// средно аритметично
    int sum = 0;
    double average;
    for(int i = 0; i < N; i++)
    {
        sum += temperatures[i];
    }
    average = (double)sum / N*1.0;

    /// брой над средната
    int cnt = 0;
    for(int i = 0; i < N; i++)
    {
        if(average <= temperatures[i])
        {
            cnt++;
        }
    }

    /// минимална разлика
    int diff = 0, minDiff = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            diff = abs(temperatures[j] - temperatures[i]);
            if(diff < minDiff)
            {
                minDiff = diff;
            }
        }
    }
    return 0;
}
