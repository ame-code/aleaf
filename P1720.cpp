#include<iostream>
using namespace std ;

int main ()
{
    int n = 0 ;
    cin >> n ;
    long long a[49] = { 0 , 1 , 1};

    for ( int i = 3 ; i <= n ; i++ )
    {
        a[i] = a[i-1] + a[i-2] ;
    }

    cout << a[n] << ".00" ;
    return 0 ;
}