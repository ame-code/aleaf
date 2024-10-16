#include<iostream>
using namespace std;

int main()
{
    string s1 = "" ;
    string s2 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;

    int n = 0 , r = 0 , num = 0 ;
    cin >> n >> r ;

    while ( n != 0 )
    {
        num = n % r ;
        n /= r ;
        s1 += s2[num] ;
    }

    int l = s1.length() ;
    while ( l-- )
    {
        cout << s1[l] ;
    }

    return 0;
}