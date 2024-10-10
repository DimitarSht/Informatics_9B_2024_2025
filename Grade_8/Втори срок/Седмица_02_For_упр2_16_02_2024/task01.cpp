#include<iostream>
using namespace std;
/*
Задача 1: Да се състави програма, която ще
изчисли сумата на 5, въведени от клавиатурата,
естествени числа от интервала [10 ..5555].
Пример: 1,2,3,4,5
Изход: 15
*/
int main()
{
int N, sum = 0;
for (int i = 0; i < 5; i++)
{
    cin >> N;
    sum = sum + N;
}
cout << sum;
    return 0;
}
