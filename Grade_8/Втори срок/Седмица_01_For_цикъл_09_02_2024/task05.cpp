#include<iostream>
using namespace std;
/*
Задача 5: Да се напише програма, която въвежда две
числа a и b (a < b) и отпечатва на екрана
всички кратни на 10, които са между a и b.
*/
int main()
{
    int a,b;
    cin>>a>>b;
    if(a < b)
    {
        for(int i = a; i <= b; i++)
        {
            if(i % 10 == 0)
            {
                cout<<i<<" ";
            }
        }
    }
    else
    {
        for(int i = b; i <= a; i++)
        {
            if(i % 10 == 0)
            {
                cout<<i<<" ";
            }
        }
    }


    return 0;
}
