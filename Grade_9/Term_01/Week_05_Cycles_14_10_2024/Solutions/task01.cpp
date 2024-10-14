#include<iostream>
using namespace std;
int main()
{
    char up = 'A', low = 'a';
    for(int i = 0; i < 26; i++)
    {
        cout<<up<<low<<" ";
        up++;
        low++;
    }
    cout<<endl;
    up--; low--;
    for(int i = 0; i < 26; i++)
    {
        cout<<up<<low<<" ";
        up--;
        low--;
    }
    return 0;
}
