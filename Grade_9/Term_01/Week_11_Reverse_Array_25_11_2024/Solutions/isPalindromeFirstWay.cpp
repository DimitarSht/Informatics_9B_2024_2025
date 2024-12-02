#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n], revArr[n];
    bool isPalindrome = true;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        revArr[i] = arr[i];
    }

    /// Ще обърнем arr
    /// Ще проверим дали arr е същият както revArr
    for(int i = 0; i < n/2; i++)
    {
        swap(revArr[i], revArr[n-i-1]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != revArr[i])
        {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
    {
        cout<<"Da, palindrom e!"<<endl;
    }
    else
    {
        cout<<"Ne e palindrom, probai drug masiv!"<<endl;
    }
    return 0;
}
