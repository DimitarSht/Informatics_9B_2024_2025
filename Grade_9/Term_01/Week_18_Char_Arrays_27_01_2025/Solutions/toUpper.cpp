#include<iostream>
using namespace std;
int main()
{
    char str[256];
    cin.getline(str, 256);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout<<str;
    return 0;
}
