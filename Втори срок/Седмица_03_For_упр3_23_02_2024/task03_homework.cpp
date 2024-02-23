#include<iostream>
using namespace std;
/*
Задача 3: Да се напише програма, която
позволява въвеждане на числа до въвеждане на 0 и
след това да отпечата най-малкото и най-голямото
от тях. Използвайте for цикъл.
*/
int main()
{
    int number, MIN = 999, MAX = 1;
    cin>>number;
    for(;number!=0;)
    {
        if(number > MAX)
        {
            MAX = number;
        }
        if(number < MIN)
        {
            MIN = number;
        }
        cin>>number;
    }
    cout<<MIN<<" "<<MAX;
    return 0;
}
