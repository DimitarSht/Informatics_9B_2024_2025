#include<iostream>
using namespace std;
int main()
{
    int sum = 0, a, b, c, br = 0;
    for(int i = 100; i <= 999; i++)
    {
        a = i%10;
        b = i/10%10;
        c = i/100;
        sum = a+b+c;
        if(i%sum == 0)
        {
            br++;
        }
    }
    cout<<br;
    return 0;
}
