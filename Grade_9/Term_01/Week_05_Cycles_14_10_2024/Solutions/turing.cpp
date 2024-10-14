#include<iostream>
using namespace std;
int main()
{
    int a, b, num, tmp;
    cin>>a>>b;
    char op, op1;
    cin>>op;
    do
    {
        switch(op)
        {
        case 'l':
            cin>>op1;
            if(op1 == '+')
            {
                a += b;
            }
            else if(op1 == '-')
            {
                a -= b;
            }
            break;
        case 'r':
            cin>>op1;
            if(op1 == '+')
            {
                b += a;
            }
            else if(op1 == '-')
            {
                b -= a;
            }
            break;
        case 's':
            tmp = a;
            a = b;
            b = tmp;
            break;
        default:

            break;
        }
        cin>>op;
    } while(op != 'p');
    cout<<a<<" "<<b;
    return 0;
}
