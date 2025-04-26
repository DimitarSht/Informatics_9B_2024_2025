#include<iostream>
#include<string>
using namespace std;

bool isVowel(char c)
{
    return c=='a' || c=='o' || c=='u'
        || c=='i' || c=='e';
}
void duma(string &str, int n)
{
    for(int i = 0; i < str.size(); i++){
        if(isVowel(str[i])){
            str[i] += n;
        }
    }
}
int main()
{
    string str;
    cin>>str;
    int n;
    cin >> n;
    duma(str, n);
    cout << str;
    return 0;
}
