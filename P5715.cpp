#include<iostream>
using namespace std;

int main()
{
    int a = 0 , b = 0 , c = 0 ;
    cin >> a >> b >> c ;

    int temp = 0 ;
    if ( a > b )
    {
        temp = a ;
        a = b ;
        b = temp ;
    }
    if ( b > c )
    {
        temp = b ;
        b = c ;
        c = temp ;
    }
    if ( a > b )
    {
        temp = a ;
        a = b ;
        b = temp ;
    }

    cout << a << " " << b << " " << c ;

    return 0;
}