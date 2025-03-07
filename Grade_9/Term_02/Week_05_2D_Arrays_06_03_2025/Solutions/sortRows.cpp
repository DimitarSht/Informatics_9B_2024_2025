#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int table[n][n];

    int col = n;
    int row = n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];
        }
    }

    /// Сортиране по редове
//    for(int i = 0; i < row; i++)
//    {
//        for(int j = 0; j < col - 1; j++)
//        {
//            for(int k = 0; k < col - j - 1; k++)
//            {
//                if(table[i][k] > table[i][k + 1])
//                {
//                    swap(table[i][k], table[i][k + 1]);
//                }
//            }
//        }
//    }

    /// Сортиране по колони
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row - 1; j++)
        {
            for(int k = 0; k < row - j - 1; k++)
            {
                if(table[k][i] > table[k+1][i])
                {
                    swap(table[k][i], table[k+1][i]);
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
