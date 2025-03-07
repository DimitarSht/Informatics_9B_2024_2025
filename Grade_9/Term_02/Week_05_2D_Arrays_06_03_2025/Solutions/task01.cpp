/// Имаме двумерен масив NxN
/// Искаме да вземем най-малкия
/// елемент на всеки ред
/// и да го запишем в един едномерен масив
/// Накрая, принтираме едномерния масив.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int table[n][n];
    int minElements[n], Min = 1000000;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(table[i][j] < Min)
            {
                Min = table[i][j];
            }
        }
        minElements[i] = Min;
        Min = 100000;
    }

    for(int i = 0; i < n; i++)
        cout<<minElements[i]<<" ";


    return 0;
}
