#include<iostream>
using namespace std ;

int main ()
{
    int s = 0 , v = 0 , t = 0 ;
    cin >> s >> v ;
    t = 8 * 60 + 24 * 60 ;

    int minute = 0 ;
    if ( s%v == 0 ) minute = s/v ;
    else minute = s/v + 1 ;
    t -= minute ;
    t -= 10 ;

    int h = t / 60 % 24 , m = t % 60 ;

    if ( h > 9 ) cout << h ;
    else cout << 0 << h ;
    cout << ":" ;
    if ( m > 9 ) cout << m ;
    else cout << 0 << m ;

    return 0 ;
}