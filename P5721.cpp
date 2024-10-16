#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n = 0 , m = 1 ;
    cin >> n ;

    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n-i ; j++ , m++ )
        {
            if ( m < 10 )
            {
                cout << 0 << m ;
            }
            else
            {
                cout << m ;
            }
        }
        cout << endl ;
    }

    return 0;
}