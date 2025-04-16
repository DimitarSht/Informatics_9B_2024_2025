#include<iostream>
using namespace std;

bool areEqual(int x, int y)
{
    return x == y;
}

void areEqual2(int x, int y)
{
    if(x == y)
    {
        cout<<"equal";
    }
    else
    {
        cout<<"not equal";
    }
}

int main()
{
    int a, b;
    cin>>a>>b;
//    bool result = areEqual(a, b);
//    cout<<areEqual(a, b);

    areEqual2(a, b);


    return 0;
}
