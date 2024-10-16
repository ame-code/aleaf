#include<iostream>
using namespace std ;

int main ()
{
    int n = 0 , arr[10010] ;
    cin >> n ;

    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
    }


    int sum = 1 , max = 0 ;
    for ( int i = 0 ; i < n-1 ; i++ )
    {
        if ( arr[i+1] == arr[i]+1 )
        {
            ++sum ;
        }
        else
        {
            max = ( sum > max ? sum : max ) ;
            sum = 1 ;
        }
    }

    max = ( sum > max ? sum : max ) ;
    cout << max ;

    return 0 ;
}