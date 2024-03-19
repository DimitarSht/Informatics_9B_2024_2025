#include<iostream>
using namespace std;
int main()
{
    int n1 = 5, x, y;
    for( x = 0; x < n1; x++){
        for( y = 0; y < n1; y++){
            if(x + y >= n1 - 1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        for(y = 0; y < n1; y++){
            if(x > y){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for( x = 1; x < n1; x++){
        for(y = 0; y < n1; y++){
            if(x <= y){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        for(y = 0; y < n1; y++){
            if(x + y < n1 - 1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
