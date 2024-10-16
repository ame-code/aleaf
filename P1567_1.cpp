#include<iostream>
using namespace std ;

int main ()
{
    int n = 0 ;
    cin >> n ;

    int temperature = 0 , last_temperature = 0 , max_day = 0 , day = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> temperature ;
        if( temperature > last_temperature )
        {
            day++ ;
            last_temperature = temperature ;
        }
        else
        {
            day = 1 ;
            last_temperature = temperature ;
        }
        max_day = ( day > max_day ? day : max_day ) ;
    }

    cout << max_day ;

    return 0 ;
}