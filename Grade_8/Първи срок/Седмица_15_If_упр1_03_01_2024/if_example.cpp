#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x > 0)
    {
        cout<<x;
    }
    else if(x < 0)
    {
        cout<<x + 10;
    }
    else
    {
        cout<<x - 10;
    }

    return 0;
}

