#include<iostream>
using namespace std;
int cars(int kol, int shasi, int people)
{
    int car = 0;
    while((kol % 4 == 0 || kol > 4)
          && shasi != 0 && (people % 2 == 0
          || people > 2))
    {
        car++;
        kol -= 4;
        shasi--;
        people -= 2;
    }
    return car;
}
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<cars(a,b,c);

    return 0;
}
