#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str, acronym = "";
    getline(cin, str);
    for(int i = 1; i < str.size(); i++){
        if(i - 1 == 0 || str[i-1] == ' '){
            acronym += str[i];
        }
    }
    cout << acronym;
    return 0;
}
