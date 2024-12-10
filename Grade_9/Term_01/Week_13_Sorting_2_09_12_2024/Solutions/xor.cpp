#include<iostream>
using namespace std;
int main ()
{
    int N, br = 0;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(a[i] == a[j]){
                br++;
            }
        }
    }
    cout << br;
    return 0;
}
