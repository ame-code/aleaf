#include<iostream>
using namespace std;

int main()
{
    int a = 0 ;
    cin >> a ;

    for ( int i = 0 , x = 1 ; i< a ; i++ )
    {
        for ( int j = 1 ; j <= a ; j++ , x++ )
        {
            if ( x <= 9 )
            {
                cout << '0' << x ;
            }
            else
            {
                cout << x ;
            }
        }
        cout << endl ;
    }

    cout << endl ;

    for ( int i = 0 , x = 1 ; i < a ; i++ )
    {
        for ( int j = 1 ; j <= a-i-1 ; j++ )
        {
            cout << "  " ;
        }

        for ( int j = 0 ; j <= i ; j++ , x++ )
        {
            if ( x <= 9 )
            {
                cout << '0' << x ;
            }
            else
            {
                cout << x ;
            }
        }
        cout << endl ;
    }

    return 0;
}