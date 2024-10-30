#include<iostream>
using namespace std;
int main()
{
   /* <тип> <име>[размер];

    Масив от double-ли с размерност 10 и име masiv
    ///double masiv[10];
    double masiv[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 , 10.0} -> 10 числа

    int arr[5] = {10, 20000, -50, 40, 0};

    bool redica[] = {0,1,0,1,1,1,0,1};

    int nuli[200000] = {1};

    nuli[1] = 5;
    nuli[20000] = 10000;

    cin>>nuli[0];
    cout<<nuli[0];


    int b[10];
    for(int i = 0; i < 10; i++)
    {
        cin>>b[i];
    }
    for(int i = 0; i < 10; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i = 9; i >= 0; i--)
    {
        cout<<b[i]<<" ";
    }
*/
    int n, sum = 0, prod = 1, cnt = 0;
    cin>>n;
    int c[n];
    for(int i = 0; i < n; i++)
    {
        cin>>c[i];
        sum += c[i];
        prod *= c[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl<<sum<<" "<<prod<<" ";
    for(int i = 0; i < n ; i++)
    {
        if(c[i] == 0)
        {
            cnt++;
        }
    }
    cout<<cnt;




    return 0;
}
