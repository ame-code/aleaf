#include<iostream>
#include<math.h>
using namespace std ;

int main ()
{
    double v = 7 ;
    double s = 0 , x = 0 ;

    cin >> s >> x ;

    double  length = 0 ;
    int sum = 0 ;
    
    while ( length <= s+x )
    {
        if ( length >= s-x && length <= s+x )   sum++ ;
        length += v ;
        v *= 0.98 ;
        
    }

    if ( sum > 1 )  cout << "y" ;
    else    cout << "n" ;

    return 0 ;
}