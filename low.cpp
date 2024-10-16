#include<iostream>
using namespace std ;

int hight[10001] ;

int find( int i , int n )
{
    while ( hight[i] != hight[i+1] || i+1 > n )
    {
        i++;
    }

    if( hight[i] > hight[i+1])
        return 0 ;
    else if (hight[i] < hight[i+1] )
        return 1 ;
    else
        return 0 ;
    
}

int main ()
{
    int n = 0 , sum = 0 ;
    cin >> n ;
    for (int i = 1 ; i <= n ; i++ )
    {
        cin >> hight[i] ;
    }

    for ( int i = 2 ; i < n - 1 ; i++ )
    {
        if ( hight[i-1] > hight[i] && hight[i] < hight[i+1] )
        {
            sum ++ ;
        }
        else if ( hight[i-1] > hight[i] && hight[i] == hight[i+1] )
        {
            sum += (find( i , n )) ;
        }
    }

    cout << sum ;

    return 0 ;
}