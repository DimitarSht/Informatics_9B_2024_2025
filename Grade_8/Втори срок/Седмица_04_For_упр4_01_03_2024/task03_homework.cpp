#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int delitel = 1; delitel <= n; delitel++)
    {
        if(n % delitel == 0)
        {
            cout<<delitel<<" ";
        }
    }
    return 0;
}


