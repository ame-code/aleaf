#include<iostream>
using namespace std ;

int temperature[1000010] ;
int main ()
{
    int n = 0 ;
    cin >> n ;

    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> temperature[i] ;
    }

    int min_tp = 0 , day = 0 , max_day = 0 ;
    for ( int i = 0 ; i < n - 1 ; i++ )
    {
        if ( temperature[i] > temperature[i+1] )
        {
            day = i - min_tp + 1 ;
            max_day = ( day > max_day ? day : max_day ) ;
            min_tp = i + 1 ;
        }
    }

    cout << max_day ;

    return 0 ;
}