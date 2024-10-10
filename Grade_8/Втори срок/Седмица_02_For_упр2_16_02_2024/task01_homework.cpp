#include<iostream>
using namespace std;
int main()
{
    /*
    int sum = 0;
    for(int i = 1; i <= 100 ; i++)
    {
        sum = sum + i;
    }
    cout<<sum;
    */

    /*/// Task 2
    int sum = 0, N;
    cin>>N;
    for(int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }
    cout<<sum;
    */

    /*/// Task 3
    int N;
    cin>>N;
    for(int i = 1; i <= N; i++)
    {
        if(N % i == 0)
        {
            cout<<i<<" ";
        }
    }*/

    /// Task 4
    /*int N, prod = 1;
    cin>>N;
    for(int i = 1; i <= N; i++)
    {
        prod = prod * i;
    }
    cout<<prod;*/

    /*/// Task 5
    int a, n, result = 1;
    cin>>a>>n;
    for(int i = 0; i < n; i++)
    {
        result = result * a;
    }
    cout<<result;
    */

    /*/// Task 6
    int N, current, sum = 0, counter = 0;
    int MIN = 999, MAX = 0;
    cin>>N;
    for(int i = 1; i <= N; i++)
    {
        cin>>current;
        sum = sum + current;
        if(current % 2 == 0)
        {
            counter++;
        }
        if(current > MAX)
        {
            MAX = current;
        }
        if(current < MIN)
        {
            MIN = current;
        }
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Count even: "<<counter<<endl;
    cout<<"Min: "<<MIN<<endl;
    cout<<"MAX: "<<MAX<<endl;
    */

    /// Task 7
    int N;
    cin>>N;
    bool prostoLiE = true;
    for(int i = 2; i < N/2; i++)
    {
        if(N % i == 0)
        {
            prostoLiE = false;
            i = N/2;
        }
    }
    if(prostoLiE)
    {
        cout<<"prosto";
    }
    else
    {
        cout<<"sustavno";
    }

    return 0;
}
