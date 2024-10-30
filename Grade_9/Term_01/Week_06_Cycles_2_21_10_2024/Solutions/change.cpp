#include<iostream>
using namespace std;
int main()
{
    int change;
    int br100 = 0, br50 = 0, br20 = 0;
    int br10 = 0, br5 = 0, br2 = 0, br1 = 0;
    cin>>change;

    if(change >= 100)
    {
        br100 = change / 100;
        change = change % 100;
    }
    if(change >= 50)
    {
        br50 = change / 50;
        change = change % 50;
    }
    if(change >= 20)
    {
        br20 = change / 20;
        change = change % 20;
    }
    if(change >= 10)
    {
        br10 = change / 10;
        change = change % 10;
    }
    if(change >= 5)
    {
        br5 = change / 5;
        change = change % 5;
    }
    if(change >= 2)
    {
        br2 = change / 2;
        change = change % 2;
    }
    if(change >= 1)
    {
        br1 = change / 1;
        change = change % 1;
    }

    if(br100 > 0) cout<<br100<<" x 100"<<endl;
    if(br50 > 0) cout<<br50<<" x 50"<<endl;
    if(br20 > 0) cout<<br20<<" x 20"<<endl;
    if(br10 > 0) cout<<br10<<" x 10"<<endl;
    if(br5 > 0) cout<<br5<<" x 5"<<endl;
    if(br2 > 0) cout<<br2<<" x 2"<<endl;
    if(br1 > 0) cout<<br1<<" x 1"<<endl;
    return 0;
}
