#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str, helloWorld = "Hello World";
    getline(cin, str);

    for(int i = str.find(helloWorld);
            i < str.find(helloWorld) + helloWorld.size();
            i++)
    {
        cout<<str[i];
    }


    return 0;
}
