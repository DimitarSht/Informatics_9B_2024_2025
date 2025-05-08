#include<iostream>
#include<string>
using namespace std;

/// Задача 6
int maxNumber(int n)
{
    string number = to_string(n);
    for(int i = 0; i < number.size() - 1; i++)
    {
        for(int j = 0; j < number.size() - i - 1; j++)
        {
            if(number[j] < number[j+1])
            {
                swap(number[j], number[j+1]);
            }
        }
    }
    int p = 0;
    for(int i = 0; i < number.size(); i++)
    {
        p = 10 * p + number[i] - '0';
    }

    return p;
}

void maxArr(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        arr[i] = maxNumber(arr[i]);
    }

    for(int i = 0; i < sz; i++)
    {
        cout<<arr[i]<<" ";
    }
}

/// Задача 9
int func(int number, int x)
{
    int count = 0;
    while(number != 0)
    {
        int digit = number % 10;
        if(digit == x)
        {
            count++;
        }
        number /= 10;
    }
    return count;
}

/// Задача 10
string toBase(int number, int base)
{
    string result, temp;

    while(number != 0)
    {
        int digit = number % base;
        if(digit >= 10)
        {
            result.push_back('A' + digit % 10);
        }
        else
        {
            result.push_back(digit + '0');
        }
        number /= base;
    }
    for(int i = result.size() - 1; i >= 0; i--)
    {
        temp += result[i];
    }
    return temp;
}

int main()
{
//    cout<<maxNumber(123);
//    int n = 4;
//    int arr[] = {123 ,132 ,43, 1};
//    maxArr(arr, n);

//    cout<<func(12334567, 3);
    cout<<toBase(123, 2)<<endl;
    cout<<toBase(222, 16)<<endl;
    return 0;
}
