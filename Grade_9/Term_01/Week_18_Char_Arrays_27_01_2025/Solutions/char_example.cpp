#include<iostream>
using namespace std;
int main()
{
    char str[256];
//    cin>>str;

    cin.getline(str, 256);

    for(int i = 0; str[i] != '\0'; i++)
    {
        cout<<str[i];
    }

//    cout<<str;
    return 0;
}
