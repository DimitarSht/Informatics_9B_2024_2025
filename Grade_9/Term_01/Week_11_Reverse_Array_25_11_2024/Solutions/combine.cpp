#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr1[n],arr2[k],arr3[n+k];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        arr3[i]=arr1[i];
    }
    for(int i=0;i<k;i++){
        cin>>arr2[i];
        arr3[i+n]=arr2[i];
    }
    for(int i=0;i<n+k;i++){
        cout<<arr3[i];
    }

    return 0;
}
