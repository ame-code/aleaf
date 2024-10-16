#include<bits/stdc++.h>
using namespace std;

int main()
{
    string b ;
    cin >> b ;
    char x = b[1] ;
    int a[11] ;
    a[1] = b[0] - '0' , a[2] = b[2] - '0' , a[3] = b[3] - '0' , a[4] = b[4] - '0' , a[5] = b[6] - '0' ,
    a[6] = b[7] - '0' , a[7] = b[8] - '0' , a[8] = b[9] - '0' , a[9] = b[10] - '0' ;
    if ( b[12] != 'X' ) a[10] = b[12] - '0' ;
    else a[10] = 10 ;

    int sum = 0 ;
    for ( int i = 1 ; i < 10 ; i++ )
    {
        sum += ( a[i] * i ) ;
    }

    sum %= 11 ;

    if( a[10] == sum )
    {
        cout << "Right" ;
    }
    else
    {
        if ( sum != 10 ) cout << a[1] << x << a[2] << a[3] << a[4] << x << a[5] << a[6] << a[7] << a[8] << a[9] << x << sum ;
        else cout << a[1] << x << a[2] << a[3] << a[4] << x << a[5] << a[6] << a[7] << a[8] << a[9] << x << 'X' ;
    }

    return 0;
}