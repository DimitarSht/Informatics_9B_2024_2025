#include<iostream>
using namespace std;
/*
Задача 1:
Да се състави програма, която въвежда
естествени числа от интервала [10..9999],
докато сумата им стане 5 цифрено число.
Програмата да извежда най-голямото въведено
число и неговия пореден номер.
Входни данни: естествени числа от
интервала[1..9999]
Пример: 12, 4444, 2022, 3033, 4123
Изход: 4444 с номер 2
Използвайте цикъл while.
*/
int main()
{
    int currentN, sum = 0, Max = 0, nomer = 0, MaxNomer;
    while(sum < 10000)
    {
        cin>>currentN;
        sum += currentN;
        if(currentN > Max)
        {
            Max = currentN;
            MaxNomer = nomer;
        }
        nomer++;
    }
    cout<<Max<<" "<<MaxNomer+1<<" "<<nomer;

/*
    int num;
    cin>>num;
    int sumDigits = 0, prodDigits = 1;
    int Min = 9999999, Max = 0;
    while(num!=0)
    {
        currentDigit = num % 10;
        if(currentDigit > Max)
        {
            Max = currentDigit;
        }
        if(currentDigit < Min)
        {
            Min = currentDigit;
        }
        sumDigits += currentDigit;
        prodDigits *= currentDigit;
        num /= 10;
    }

*/

    return 0;
}
