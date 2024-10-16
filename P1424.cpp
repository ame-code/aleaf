#include<iostream>
using namespace std ;

int main ()
{
    int x = 0 , n = 0 ;
    cin >> x >> n ;

    int sum = 0 ;

    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( x%7==1 || x%7==2 || x%7 == 3 || x%7==4 || x%7==5 )
        {
            sum += 250 ;
            x++;
        }
        else
        {
            x++;
        }
    }

    cout << sum ;

    return 0 ;
}