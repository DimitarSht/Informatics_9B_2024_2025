#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, cntDigits = 0, tmp, digit,newNumber = 0;
    cin>>num;
    tmp = num;
    while(tmp != 0)
    {
        cntDigits++;
        tmp /= 10;
    }
    for(int i = cntDigits - 1; i >= 0; i--)
    {
        digit = num % 10;
        newNumber += digit * pow(10, i);
        num /= 10;
    }
    cout<<newNumber;

    return 0;
}
