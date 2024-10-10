#include<iostream>
using namespace std;
/*
3. Дадени са три числа. Да се определи дали
точно две измежду тях са равни –
надпис “Yes” или “No”.
*/
int main()
{
    int A, B, C;
    cin>>A>>B>>C;
    if(A == B || B == C || A == C)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

    return 0;
}
