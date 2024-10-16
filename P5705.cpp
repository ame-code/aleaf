#include<iostream>
using namespace std;

int main ()
{
    string a ;
    cin >> a ;
    int n = a.length() ;
    for ( int i = n-1 ; i >= 0 ; i-- )
    {
        cout << a[i] ;
    }
    return 0;
}