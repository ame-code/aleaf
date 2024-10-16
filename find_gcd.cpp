#include<iostream>
using namespace std;

int find_gcd( int a , int b )
{
    if ( !b )
    {
        return a ;
    }
    else
    {
        return find_gcd(b,a%b);
    }
}

int main()
{
    int a = 0 , b = 0 ;
    cin >> a >> b ;

    cout << find_gcd( max(a,b) , min(a,b) );

    return 0;
}