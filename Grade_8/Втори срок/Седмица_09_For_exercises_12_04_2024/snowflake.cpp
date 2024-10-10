#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int y = 0; y < n; ++y){
        for(int x = 0; x < n; ++x){
            if(y + x == n - 1 || y == x || y == n / 2 || x == n / 2){
                cout << "*";
            }else{
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
