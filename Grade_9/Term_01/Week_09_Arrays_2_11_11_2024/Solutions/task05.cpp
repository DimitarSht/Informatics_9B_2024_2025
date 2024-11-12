#include<iostream>
#include<cmath>
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

//    int MAX = -10000;
    int sum = 0, minimalDifferense = 10000;
    int maximalDifferense = -1;
    int difference = 0, minIndex = -1, maxIndex = -1;
    double average = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    average = sum / (double)n;

    for(int i = 0; i < n; i++)
    {
        difference = abs(arr[i] - average);
        if(difference < minimalDifferense)
        {
            minimalDifferense = difference;
            minIndex = i;
        }
        if(difference > maximalDifferense)
        {
            maximalDifferense = difference;
            maxIndex = i;
        }
        difference = 0;
    }
    cout<<arr[maxIndex]<<endl;

    return 0;
}

