#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    bool isPalindrome = true;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < n/2; i++)
    {
        if(arr[i] != arr[n-i-1])
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
