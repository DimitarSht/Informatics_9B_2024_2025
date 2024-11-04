#include<iostream>
using namespace std;
int main ()
{
    int n, sum = 0;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int i = 0; i < n; i++){
        if(i%2 == 1){
            cout << x[i];
            cout << endl;
        }
        else{
            sum += x[i];
        }
    }
    cout << sum;
    return 0;
}
