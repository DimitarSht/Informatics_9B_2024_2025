#include<iostream>
using namespace std;

int absolute(int n)
{
    if(n<0)
    {
        n = n*(-1);
    }
    return n;
}
int cubes (int s)
{
    return s * s * s;
}

string greeting ( string name )
{
    if( name == "Ivancho")
    {
        return "Hello , my Love !";
    }
    return "Hello, " + name + "!";
}

string sort_word ( string &str )
{
//    sort ( begin (), str () ) ;

    for(int i = 0; i < str.size() - 1; i++)
    {
        for(int j = 0; j < str.size() - i - 1; j++)
        {
            if(str[j] < str[j+1])
            {
                swap(str[j], str[j+1]);
            }
        }
    }

    return str;
}

int myStrLen(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

void myStrCat(char dest[], char src[])
{
    int destLength = myStrLen(dest);
    int srcLength = myStrLen(src);
    char newDest[destLength + srcLength];
    for(int i = 0; i < destLength; i++)
    {
        newDest[i] = dest[i];
    }
    for(int i = destLength; i < destLength + srcLength; i++)
    {
        newDest[i] = src[i - destLength];
    }
    cout<<newDest;
}


int main()
{
//    char str[5] = {'a','b','c','d'};
////    int arr[] ={1,2,3,4,5};
//    cout<<myStrLen(str);

    char s1[], s2[];
    s1 = "abcd";
    s2 = "ABCD";

    if(s1 != s2) cout<<"S1 > S2";


//    if(strcmp(s1, s2))
    return 0;
}
