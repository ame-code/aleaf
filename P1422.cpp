#include<iostream>
using namespace std ;

int main ()
{
    const double cost_1 = 0.4463 , cost_2 = 0.4663 , cost_3 = 0.5663 ;
    int kw_h = 0 ;
    cin >> kw_h ;

    double sum = 0 ;

    if ( kw_h > 400 )
    {
        sum += ( kw_h - 400 ) * cost_3 ;
        kw_h = 400 ;
    }

    if ( kw_h > 150 )
    {
        sum += ( kw_h - 150 ) * cost_2 ;
        kw_h = 150 ;
    }

    if ( kw_h <= 150 )
    {
        sum += kw_h * cost_1 ;
        kw_h = 0 ;
    }

    sum = (int) ( ( sum * 10 ) + 0.5 ) ;
    sum = ( (double) sum ) / 10 ;
    cout << sum ;

    return 0 ;
}