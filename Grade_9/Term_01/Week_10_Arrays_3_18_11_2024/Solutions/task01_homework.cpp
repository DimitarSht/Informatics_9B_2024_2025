#include<iostream>
using namespace std;
int main()
{
    int sz1, sz2;
    cin>>sz1>>sz2;
    int arr1[sz1], arr2[sz2], combined[sz1];
    for(int i = 0; i < sz1; i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0; i < sz2; i++)
    {
        cin>>arr2[i];
    }

    for(int i = 0; i < sz1; i++)
    {
        for(int j = 0; j < sz2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                combined[i] = arr1[i];
            }
        }
    }

    for(int i = 0; i < sz1; i++)
    {
        cout<<combined[i]<<" ";
    }

    return 0;
}
