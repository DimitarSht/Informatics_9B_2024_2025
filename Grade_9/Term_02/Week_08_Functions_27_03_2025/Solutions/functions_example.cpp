#include<iostream>
using namespace std;

// Функция с име sbor, приемаща аргументи int a, int b, int c и връщаща резултат от тип int
int sbor(int a, int b, int c)
{
    return a + b + c;
}

// Функция с име sbor2, приемаща аргументи int a, int b, от тип void, т.е. функцията не връща стойност
void sbor2(int a, int b)
{
    cout<<a+b;
//  нямаме return a + b;
}

// Главна функция 
int main()
{
    /// Обърнете внимание на двата начина за извикване на функциите

    /// Извикваме функция с име sbor и аргументи 1, 2, 3
    cout<<sbor(1,2,3)<<" ";

    /// Извикваме функция с име sbor2 и аргументи 1, 2
    sbor2(1,2);

    return 0;
}
