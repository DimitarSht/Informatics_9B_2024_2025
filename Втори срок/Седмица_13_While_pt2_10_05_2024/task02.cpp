#include<iostream>
#include<cmath> /// библиотека с математически функции като pow() - степенуване, sqrt() - коренуване и др.
using namespace std;
int main()
{
    /*
    Да се състави програма, която по въведено естествено число >=1, чрез цикъл while,
    го преобразува в N-ична бройна система, където N е от интервала [2..9].
    Входни данни br - естествено число [2..999].
    Пример: 9,2 Изход: 1001 при избрана 2-ична бройна системa
    */
    int n, br, newN = 0, currDigit,cnt = 0;
    cin>>n>>br;
    while(n!=0)
    {
        currDigit = n % br;
        newN = newN + currDigit*pow(10, cnt);
        n /= br;
        cnt++;
    }
    cout<<newN<<endl;
    return 0;
}
