#include<iostream>
using namespace std;

double suma(double x, double y)
{
    double z;
    cin>>z;
    return x + y + z;
}

void suma2(double x, double y)
{
    double z;
    cin>>z;
    cout<<x + y + z;
}

int NOD(int a, int b){
    while(a != 0 && b != 0){
        int olda = a;
        a = b;
        b = olda % b;
    }
    return max(a, b);
}

int subSum(int arr[], int sz)
{
    int sum = 0;

    for(int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }

    return sum;
}

void input(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }
}

void output(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
//    double a, b;
//    cin>>a>>b;
//    cout<<suma(a, b);
//
//    suma2(a, b);

//    int a, b;
//    cin >> a >> b;
//    cout << NOD(a, b);

    int n;
    cin>>n;
    int arr[n];
    input(arr, n);
    cout<<subSum(arr, n)<<endl;
    output(arr, n);
    return 0;
}
