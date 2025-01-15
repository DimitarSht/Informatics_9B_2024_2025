#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int army1[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> army1[i];
    }
    cin >> m;
    int army2[m];
    for(int i = 0; i < m; ++i)
    {
        cin >> army2[i];
    }
    while(true)
    {
        // simulate
        int i = 0, j = 0;
        for(; i < n && j < m ;)
        {
            if(army1[i] == 0)
            {
                i++;
                continue;
            }
            if(army2[j] == 0)
            {
                j++;
                continue;
            }
            if(army1[i] > army2[j])
            {
                army2[j] = 0;
            }
            else if(army1[i] < army2[j])
            {
                army1[i] = 0;
            }
            else
            {
                army1[i] = 0;
                army2[j] = 0;
            }
            i++;
            j++;
        }

        bool has_alive_1 = false, has_alive_2 = false;

        for(i = 0; i < n; ++i)
        {
            if(army1[i] > 0)
            {
                army1[i] /= 10;
            }
        }
        for(i = 0; i < m; ++i)
        {
            if(army2[i] > 0)
            {
                army2[i] /= 10;
            }
        }
        for(i = 0; i < n; ++i)
        {
            cout << army1[i] << " ";
            if(army1[i] > 0) has_alive_1 = true;
        }
        cout << endl;
        for(i = 0; i < m; ++i)
        {
            cout << army2[i] << " ";
            if(army2[i] > 0) has_alive_2 = true;
        }
        cout<<endl;

        if(!has_alive_1)
        {
            cout << 2;
            break;
        }
        if(!has_alive_2)
        {
            cout << 1;
            break;
        }
    }
    return 0;
}
