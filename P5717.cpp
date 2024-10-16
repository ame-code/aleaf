#include<bits/stdc++.h>
using namespace std;

int a = 0 , b = 0 , c = 0 ;
void sort_1 ()
{
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
}

int main()
{

    cin >> a >> b >> c ;

    sort_1() ;

    if ( a+b <= c )
    {
        cout << "Not triangle" << endl ;
    }
    else
    {
        if ( a*a + b*b == c*c )
        {
            cout << "Right triangle" << endl ;
        }
        if ( a*a + b*b > c*c )
        {
            cout << "Acute triangle" << endl ;
        }
        if ( a*a + b*b < c*c )
        {
            cout << "Obtuse triangle" << endl ;
        }
        if ( a==b || b==c || a==c )
        {
            cout << "Isosceles triangle" << endl ;
        }
        if ( a==b && b==c )
        {
            cout << "Equilateral triangle" << endl ;
        }
    }
    
    return 0;
}