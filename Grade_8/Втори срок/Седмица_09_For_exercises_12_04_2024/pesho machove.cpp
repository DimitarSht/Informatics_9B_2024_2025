#include<iostream>
using namespace std;
int main(){
    int sbor;
    cin >> sbor;

    for(int izvazdane = 1; sbor > 0; izvazdane++){
        sbor = sbor - izvazdane; // sbor -= izvazdane;
        if(!(sbor > 0)){ // sbor <= 0
            cout << izvazdane;
        }
    }
    return 0;
}
