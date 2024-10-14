#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    bool isTwo;
    cin>>num;

    for(int i = 0; i < num; i++)
    {
        if(num == pow(2, i))
        {
            isTwo = true;
            break;
        }
        else
        {
            isTwo = false;
        }
    }
    if(isTwo) cout<<"True";
    else cout<<"False";

    return 0;
}
