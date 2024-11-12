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
    int MAX = arr[0];
    int MIN = arr[0];
    int sum = 0, sumAbsolute = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        sumAbsolute += abs(arr[i]); /// модул
        if(arr[i] > MAX)
        {
            MAX = arr[i];
        }
        if(arr[i] < MIN)
        {
            MIN = arr[i];
        }
    }
    cout<< MAX <<" "<< MIN <<endl;
    cout<< sum / (double)n<<endl;
    cout<< sumAbsolute / (double)n<<endl;


    return 0;
}
