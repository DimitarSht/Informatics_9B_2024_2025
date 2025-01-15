#include<iostream>
using namespace std;
int main()
{
    int num, sz = 100000, cnt = 0, aliSum = 0;
    cin>>num;
    int deliteli[sz];
    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            deliteli[cnt] = i;
            cnt++;
        }
    }
    for(int i = 0; i < cnt; i++)
    {
        aliSum += deliteli[i];
    }

    if(num == aliSum)
    {
        cout<<"perfect"<<endl;
    }
    else if(num < aliSum)
    {
        cout<<"abundant"<<endl;
    }
    else
    {
        cout<<"deficient"<<endl;
    }

}

////1 3 5 2 2

bool hasTurningPoint = false;
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < i; j++)
    {
        sumLeft += arr[j];
    }
    for(int j = i + 1; j < n; j++)
    {
        sumRight += arr[j];
    }
    if(sumLeft == sumRight)
    {
        cout << i << endl;
        hasTurningPoint = true;
        break;
    }
    sumLeft = 0;
    sumRight = 0;
}
if(!hasTurningPoint)
{
    cout<<-1;
}



