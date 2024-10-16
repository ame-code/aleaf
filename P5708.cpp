#include<bits/stdc++.h>
using namespace std;


int main ()
{
    double a = 0 , b = 0 , c = 0 , p = 0 ;
    double ans = 0 ;
    cin >> a >> b >> c ;
    p = ( a + b + c ) / 2 ;
    ans = p * ( p - a ) * ( p - b ) * ( p - c ) ;
    cout << fixed << setprecision(1) << sqrt(ans) ;
    return 0;
}