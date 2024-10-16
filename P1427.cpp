#include<iostream>
using namespace std ;

int main ()
{
    long long a[110] , n = 1 ;

    int i = 0 ;
    for ( ; n != 0 ; i ++ )
    {
        cin >> a[i] ;
        n = a[i] ;
    }

    i--;
    cout << a[--i] ;
    for ( i-- ; i >= 0 ; i-- )
    {
        cout << " " << a[i] ;
    }

    return 0 ;
}