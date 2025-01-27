#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char word1[256], word2[256];
    cin.getline(word1, 256);
    cin.getline(word2, 256);
    strcat(word2, word1);
    cout<<"Word1 is: "<<word1<<endl;
    cout<<"Length of word1 is: "<<strlen(word1)<<endl;
    cout<<"Word2 is: "<<word2<<endl;
    cout<<"Length of word2 is: "<<strlen(word2)<<endl;

    char word3[256];
    strcpy(word3, strchr(word1, 'o'));
    cout<<word3<<endl;
    cout<<strchr(word1, 'o')<<endl;
    cout<<strstr(word1, " World")<<endl;

    return 0;
}
