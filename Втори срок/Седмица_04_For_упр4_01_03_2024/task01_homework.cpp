#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int teku6to4islo = 2; teku6to4islo <= n; teku6to4islo++)
    {
        for(int delitel = 2; delitel < teku6to4islo; delitel++)
        {
            if(teku6to4islo % delitel == 0)
            {
                cout<<teku6to4islo<<" ";
                break;
            }
        }
    }
    return 0;
}
