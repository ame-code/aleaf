#include<iostream>
using namespace std ;

int main ()
{
    int n = 0 , m = 0 ;
    cin >> n >> m ;

    int a[3005] ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        cin >> a [i] ;
    }

    int min_sum = 2100000000 ;
    for ( int i = 1 ; i <= n-m+1 ; i++ )
    {
        int sum = 0 ;
        for ( int j = 1 ; j <= m ; j++ )
        {
            sum += a[i+j-1] ;
        }
        min_sum = ( sum < min_sum ? sum : min_sum ) ;
    }

    cout << min_sum ;
    return 0 ;
}