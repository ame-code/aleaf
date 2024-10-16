#include<iostream>
using namespace std ;

int main ()
{
    int a = 0 , b = 0 , c = 0 , d = 0 ;
    char x ;
    cin >> a >> x >> b
        >> c >> x >> d ;
    int up = a * c , down = b * d ;

    int min_num = ( up > down ? up : down ) ;
    int gcd = 0 ;
    for ( int i = 1 ; i <= min_num ; i++)
    {
        if( up % i == 0 && down % i == 0 )
        {
            gcd = i ;
        }
    }

    cout << down / gcd << " " << up / gcd ;

    return 0 ;
}