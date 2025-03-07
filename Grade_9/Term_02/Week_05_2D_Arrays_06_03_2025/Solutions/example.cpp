#include<iostream>
using namespace std;
int main()
{
//    int table[3][3];
//    int table[3][3] = {
//        1,2,3,
//        4,5,6,
//        7,8,9
//    };

    int table[3][3];
//    table[0][0] = 1;
//    table[0][1] = 2;
//    table[0][2] = 3;

    for(int i = 0; i < 3; i++) /// редове
    {
        for(int j = 0; j < 3; j++) /// колони
        {
            cin>>table[i][j];
        }
    }

    for(int i = 0; i < 3; i++) /// редове
    {
        for(int j = 0; j < 3; j++) /// колони
        {
            if(i == j)
            {
                cout<<table[i][j];
            }
        }
        cout<<endl;
    }




    return 0;
}
