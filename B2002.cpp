#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
using ull = unsigned long long ;

int p[100000000] = {0} ;

int main ()
{
    ull n = 0 ;
    cin >> n ;
    int a = 0 , b = 0 ;

    while( n >= 1 )
    {
        while( !(n%2) )
        {
            a++;
            n /= 2 ;
        }
        n--;
        p[b] = a ;
        b++;
        a = 0 ;
    }



    // sort ( p,p+b );
    for ( int i = 1 ; i < b ; i++ )
    {
        p[i] += p[i-1] ;
    }

    // for ( int i = 0 ; i < b ; i++ )
    // {
    //     cout << p[i] << ' ' ;
    // }
    // cout << endl ;

    cout << pow(2,p[0]) ;
    for ( int i = 1 ; i < b ; i++ )
    {
        cout << ' ' << pow( 2, p[i] ) ;
    }

    return 0;
}