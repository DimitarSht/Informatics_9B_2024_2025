#include<iostream>
using namespace std;
int main()
{
    int n, prod = 1;
    /// Сума на числа
//    cin>>n;
//    while(n!=0)
//    {
//        sum+=n;
//        cin>>n;
//    }
//    cout<<sum<<endl;
//
    /// Брой числа
//    do
//    {
//        cin>>n;
//        cnt++;
//    }
//    while(n!=0);
//
//    cout<<cnt<<endl;

    /// Брой четни числа и произведение
//    int cnt = 0;
//    cin>>n;
//    while(n!=0)
//    {
//        if(n%2==0)
//        {
//            cnt++;
//        }
////        prod*=n;    /// prod = prod * n;
//        cin>>n;
//    }
//
//    cout<<cnt<<endl;

    /// Минимум и Максимум
//    int Max = -1, Min = 100000;
//    cin>>n;
//    while(n!=0)
//    {
//        if(n > Max)
//        {
//            Max = n;
//        }
//        if(n < Min)
//        {
//            Min = n;
//        }
//        cin>>n;
//    }
//    cout<<Max<<" "<<Min<<endl;

    /// Най-много еднакви последователни числа в редица
    int MAX_cnt = 0, previousNumber;
    cin>>n;
    previousNumber = n;
    while(n!=0)
    {
        cin>>n;
        if(previousNumber == n)
        {
            MAX_cnt++;
        }
        previousNumber = n;
    }

    cout<<MAX_cnt<<endl;

    return 0;
}
