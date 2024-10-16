#include<iostream>
using namespace std ;

int main ()
{
    int n = 0 , m = 0 ;
    cin >> n >> m ;

    int square = 0 , rectangle = 0 ;
    for ( int i = 0 ; i < ( n > m ? n : m ) ; i++ )
    {
        square += ( n - i ) * ( m - i ) ;
    }

    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( i != j )
            {
                rectangle += ( m - i ) * ( n - j ) ;
            }
        }
    }

    cout << square << " " << rectangle ;

    return 0 ;
}