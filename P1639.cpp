#include<iostream>
#include<cmath>
using namespace std ;

int main ()
{
    int a , b , x , y ;
    cin >> a >> b >> x >> y ;

    int sum_1 , sum_2 ;
    sum_1 = abs(a-b) ;
    sum_2 = min ( abs (a-x) , abs(a-y) ) + min ( abs(b-x) , abs(b-y) );

    cout << min ( sum_1 , sum_2 ) ;

    return 0 ;
}