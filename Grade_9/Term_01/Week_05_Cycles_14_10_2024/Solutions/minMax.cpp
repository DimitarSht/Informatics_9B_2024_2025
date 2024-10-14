#include<iostream>
using namespace std;
int main()
{
    int MIN = 999, MAX = 0, num, sum = 0, cnt = 0;
    cin>>num;
    while(num!=0)
    {
        sum += num;
        cnt++;
        if(num < MIN) MIN = num;
        if(num > MAX) MAX = num;
        cin>>num;
    }
    cout<<MIN<<" "<<MAX<<endl;
    cout<<(double)sum/cnt*1.0;
    return 0;
}
