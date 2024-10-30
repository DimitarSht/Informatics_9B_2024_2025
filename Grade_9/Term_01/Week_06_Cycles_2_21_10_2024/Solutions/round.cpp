#include<iostream>
using namespace std;
int main()
{
    double number;
    cin>>number;
    double diff = number - (int)number;
    if(diff >= 0.5)
    {
        cout<<(int)number + 1;
    }
    else
    {
        cout<<(int)number;
    }

    return 0;
}
