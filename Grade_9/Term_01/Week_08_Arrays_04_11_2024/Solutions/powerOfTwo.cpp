#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
//    arr[0] = 2;
//    for(int i = 1; i < N; i++)
//    {
//        arr[i] = arr[i - 1] * 2;
//    }

    for(int i = 0; i < N; i++)
    {
        arr[i] = pow(2, i+1);
    }



    for(int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
