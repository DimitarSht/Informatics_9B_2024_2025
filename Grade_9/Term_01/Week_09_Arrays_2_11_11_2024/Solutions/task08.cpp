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
    int sum = 0, cntDigits = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    while(sum != 0)
    {
        cntDigits++; /// countDigits = брой цифри
        sum /= 10;
    }
    cout<<cntDigits<<endl;

    return 0;
}
