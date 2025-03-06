#include<iostream>
#include<string>
using namespace std;
int main()
{
    string code;
    getline(cin, code);
    int counter = 10, sum = 0;

    for(int i = 0; i < code.size(); i ++)
    {

        if(code[i] >= '0' and code[i] <= '9')
        {
            sum += counter * (code[i] - '0');
            counter --;
        }
        else if(code[i] == 'x')
        {
            sum += counter * 10;
            counter --;
        }
    }

    if(sum % 11 == 0)
    {
        cout << "valid";
    }
    else
    {
        cout << "not valid";
    }

    return 0;
}
