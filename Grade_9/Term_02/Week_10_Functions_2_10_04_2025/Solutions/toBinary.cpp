#include<iostream>
#include<string>
using namespace std;
/*
int toBinary(int x)
{
    int result = 0;
    int revResult = 1;
    while(x != 0)
    {
        result += (x % 2) * revResult;
        revResult *= 10;
        x /= 2;
    }
    return result;
}
*/

char toChar(int num)
{
    return 48 + num;
}

void reverseString(string s)
{
    for(int i = 0; i < s.size() / 2; i++)
    {
        swap(s[i], s[s.size() - i- 1]);
    }

    cout<<s;
}


void toBinary(int x)
{
    int numberDigits = 0;
    int temp = x;
    while(temp != 0)
    {
        numberDigits++;
        temp /= 2;
    }
    string result;
    for(int i = numberDigits; x != 0; i--)
    {
        result.push_back(toChar(x%2));
        x /= 2;
    }
    reverseString(result);
}



int main()
{
    int num;
    cin>>num;
    //cout<<toChar(1);
     toBinary(num);


    return 0;
}
