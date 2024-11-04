#include<iostream>
using namespace std;
int main()
{
    /// Брой на 0 в масив
    int a,A=0;
    cin>>a;
    int arr[a];
    for(int i = 0;i < a;i++){
        cin>>arr[i];
    }
    for(int i =0 ;i < a;i++){
        if(arr[i]== 0){
           A=A+1;
        }
    }
    cout<<A;
    return 0;
}
