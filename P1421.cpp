#include <iostream>
using namespace std ;

int main ()
{
    double a = 0 , b = 0 ;
    double money = 0 ;
    cin >> a >> b ;
    money = a + b * 0.1 ;

    int sum = 0 ;
    while ( money >= 1.9 )
    {
        money -= 1.9 ;
        sum ++ ;
    }

    cout << sum ;

    return 0 ;
}