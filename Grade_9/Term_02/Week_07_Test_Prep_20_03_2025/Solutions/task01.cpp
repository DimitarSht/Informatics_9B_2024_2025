#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int br = 0;
    for(int i = 0;i<str.size();i++)
    {
       if(str[i] == ' ')
       {
           br++;
       }

    }

    cout<<br + 1;

    return 0;
}


