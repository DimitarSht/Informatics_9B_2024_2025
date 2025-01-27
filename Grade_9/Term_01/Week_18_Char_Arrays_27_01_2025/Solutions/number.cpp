#include<iostream>
using namespace std;
int main()
{
    char str[128];
    int res = 0, digit;
    bool neg = false;
    cin.getline(str, 128);
    if(str[0] == '-'){
        neg = true;
    }
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            digit = str[i] - '0';
            res = res*10 + digit;
        }
    }
    if(neg){
        res = -1 * res;
    }
    cout << res;
    return 0;
}
