#include<iostream>
using namespace std;
/*
Задача 4: Да се напише програма, която
отпечатва на екрана тези от числата между 1 и 100,
които са кратни на 3
*/
int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    for(int i = 1; i <= 100; i+=3)
    {
        cout<<i - 1<<" ";
    }
    return 0;
}
