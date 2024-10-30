#include<iostream>
using namespace std;
int main()
{
    int number, cnt = 0;
    cin>>number;

    cout << (number+1)*(number+2) / 2 << endl;
    for(int i = 0; i <= number; i++)
    {
        for(int j = 0; j <= number; j++)
        {
            for(int k = 0; k <= number; k++)
            {
                if(i + j + k == number)
                {
                    cnt++;
                    cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}
