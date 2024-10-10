#include<iostream>
using namespace std;
int main()
{
    /// <тип_на_променливата> <име_на_променливата> = <стойност>;
    /// <тип_на_променливата> <име_на_променливата>;
    int a1,a2,a3,a4,a5;
    cin>>a1>>a2>>a3>>a4>>a5;

    int sum = 10;
    sum = a1+a2+a3+a4+a5;
    cout<<sum<<endl;
    sum = sum + a1+a2+a3+a4+a5;
    cout<<sum<<endl;

    int prod = 1;
    prod = prod * (a1*a2*a3*a4*a5);
    cout<<prod;



    return 0;
}
