#include<iostream>
using namespace std ;

int main ()
{
    double s = 0 ;
    cin >> s ;

    double v = 2 ;
    double length = 0 ;
    int n = 0 ;

    while ( length < s )
    {
        length += v ;
        v = 0.98 * v ;
        ++n ;
    }

    cout << n ;

    return 0;
}