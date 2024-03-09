#include<iostream>
using namespace std;
int main()
{
    int n, countDigits = 1, newN = 0;
    cin>>n;
    newN = n;
    int lastDigit = n % 10;
    for(; n != 0; )
    {
        n = n / 10;
        countDigits = countDigits * 10;
    }
    int firstDigit = newN / (countDigits / 10);
    cout<<firstDigit<<" "<<lastDigit;

    return 0;
}

