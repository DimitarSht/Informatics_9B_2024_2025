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
    int sum = 0, cntDigits = 0, counter = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        while(arr[i] != 0)
        {
            cntDigits++; /// countDigits = брой цифри
            arr[i] /= 10;
        }
        counter += cntDigits;
        cntDigits = 0;
    }



    cout<<counter<<" "<<sum<<endl;

    return 0;
}
