#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int y = 0; y < n; ++y){
        for(int x = 0; x < n; ++x){
            if(x + y >= n - 1){
                cout << n - x;
            }else{
                cout << " ";
            }
        }
        for(int x = 0; x < n; ++x){
            if(y > x){
                cout << x + 2;
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int y = 1; y < n; ++y){
        for(int x = 0; x < n; ++x){
            if(y <= x){
                cout << n - x;
            }else{
                cout << " ";
            }
        }
        for(int x = 0; x < n; ++x){
            if(x + y < n - 1){
                cout << x + 2;
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
