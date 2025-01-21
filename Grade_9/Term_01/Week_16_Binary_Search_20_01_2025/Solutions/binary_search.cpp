#include<iostream>
using namespace std;
int main()
{
    int n = 19;
    int arr[n];
    cout<<"Enter SORTED array:"<<endl;
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"Enter the key: "<<endl;
    int key;    /// element, target
    cin>>key;   /// Това, което търсим

    int result = -1; /// Ако не се съдържа
    int low = 0, high = n - 1; /// долна и горна граница
    while(low <= high)
    {
        int mid = low + (high - low)/2;   /// среда на интервала
        cout<<"Checked index: "<<mid<<endl;
        if(arr[mid] == key)
        {
            result = mid;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(result != -1)
        cout<<"Key is at index "<<result;
    else
        cout<<"Not found!"<<endl;


    return 0;
}
