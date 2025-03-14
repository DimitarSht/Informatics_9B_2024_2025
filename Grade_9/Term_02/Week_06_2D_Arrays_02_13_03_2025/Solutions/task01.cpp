#include <iostream>
using namespace std;
int main()
{
    /// Декларираме двумерен масив matrix от цели числа
    /// с rows на брой редове и с cols на брой колони
    //    int rows, cols;
    //    cin>>rows>>cols;
    //    int matrix[rows][cols];

    /// Въвеждаме стойностите на елементите на matrix
    //    for(int i = 0; i < rows; i++)
    //    {
    //        for(int j = 0; j < cols; j++)
    //        {
    //            cin>>matrix[i][j];
    //        }
    //    }

    /// Извеждаме стойностите на елементите на matrix
    /// в табличен вид
    //    for(int i = 0; i < rows; i++)
    //    {
    //        for(int j = 0; j < cols; j++)
    //        {
    //            cout<<matrix[i][j]<<" ";
    //        }
    //        cout<<endl;
    //    }

    int n;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    /// Проверка дали матрицата е триъгълна
    bool a = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0)
            {
                a = false;
            }
        }
    }

    /// Чрез boolalpha директно принтираме true или false в зависимост от това каква е стойността на булевата променлива isTriangle
    cout << boolalpha << a << endl;

    //    if(a == true)
    //    {
    //        cout << "true";
    //    }
    //    else
    //    {
    //        cout<< "false";
    //    }

    return 0;
}
