#include<iostream>
using namespace std;

int main ()
{
    int a , b , c ,d ;

    cin >> a >> b >> c >> d ;

    int final = 0 , start = 0 ;
    final = c * 60 + d ;
    start = a * 60 + b ;

    int difference = 0 ;
    difference = final - start ;

    int e , f ;
    e = difference / 60 ;
    f = difference % 60 ;

    cout << e << " " << f ; 

    return 0;
}