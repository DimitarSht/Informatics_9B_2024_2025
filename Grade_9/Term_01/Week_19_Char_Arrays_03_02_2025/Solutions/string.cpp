#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
//    cin>>str;   /// дума
//    cin.getline(arr, 256);
    getline(cin, str);  /// изречение

    cout<<str[5]<<endl;


    str = str + '!';
    str.push_back('!'); /// Добавя най-отзад

    str.pop_back(); /// Маха най-отзад

    cout<<str<<endl;
//    str.length()
    cout<<str.size()<<endl;

//    str.clear();  /// изтрива целия стринг
//    str.erase(1, 3); /// трие от позиция 0 три символа
    cout<<str<<endl;

//    str.empty() /// дали стрингът е празен


    cout<<str.find(str2)<<endl;


    cout<<str.front()<<endl; /// първи елемент

    cout<<str.back()<<endl;  /// последен елемент

//    for( i = str.begin(); i < str.end(); i++)





    return 0;
}
