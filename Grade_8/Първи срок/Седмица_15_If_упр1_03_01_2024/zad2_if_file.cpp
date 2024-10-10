#include<iostream>
using namespace std;
/*
2. Дадени са три числа: A, B, C.
Да се изведе “Yes” или “No” в
зависимост от верността на съждението: “A < B < C”.
*/
int main()
{
    int A, B, C;
    cin>>A>>B>>C;

    if(A < B && B < C)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

    return 0;
}
