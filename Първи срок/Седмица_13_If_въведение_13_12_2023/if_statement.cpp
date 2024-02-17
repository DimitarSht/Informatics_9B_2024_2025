#include<iostream>
using namespace std;
int main()
{
    int x, sum = 0;
    cin>>x;
    if(x > 0)
    {
        sum = sum + x;
        cout<<sum;
    }
    else if(x < 0)
    {
        cout<<x;
    }
    else
    {
        cout<<sum;
    }


    return 0;
}
