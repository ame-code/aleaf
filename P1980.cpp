#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0 , x = 0 ;
    cin >> n >> x ;
    int sum = 0 ;

    for ( int i = 1 ; i <= n ; i++ )
    {
        int y = i ;
        while ( y != 0 )
        {
            if ( y%10 == x ) sum++;
            y /= 10 ;
        }
    }

    cout << sum ;

    return 0;
}