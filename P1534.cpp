#include<iostream>
using namespace std ;

int main ()
{
    int n = 0 ;
    cin >> n ;

    int last_day = 0 , course = 0 , extra = 0 , sum = 0 ;

    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> course >> extra ;
        sum += ( last_day = course + extra + last_day - 8 ) ;
    }

    cout << sum ;

    return 0 ;
}