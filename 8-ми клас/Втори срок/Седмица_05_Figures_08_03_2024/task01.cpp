#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int rows = 0; rows < n; rows++){
        for(int cols = 0; cols < n; cols++){
            if( cols + rows >= n - 1 && (rows + cols) % 2 == 0 ){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        for(int cols = 0; cols < n; cols++){
            if( cols < rows && (rows + cols) % 2 == 1 ){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
