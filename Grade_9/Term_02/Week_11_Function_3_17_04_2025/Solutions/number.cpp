#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int number = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            number = number * 10 + (s[i] - '0');
        }
    }
    if(s[0] == '-')
    {
        number *= -1;
    }
    cout<<number;


    return 0;
}
