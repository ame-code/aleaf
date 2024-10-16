#include<iostream>
using namespace std;

int main ()
{
    long long t = 0 , n = 0 , k = 0 ;
    cin >> t ;

    while ( t-- )
    {
        cin >> n >> k ;
        long long sum = 0 ;
        sum = ( 1 + k ) * k / 2 ;
        if ( sum <= n )
        {
            cout << "Yes\n" ;
        }
        else
        {
            cout << "No\n" ;
        }
    }

    return 0;
}