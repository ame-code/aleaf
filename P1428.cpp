#include<iostream>
using namespace std ;

int find ( int a[] , int a_element, int i )
{
    int sum = 0 ;
    for ( int j = 0 ; j < i ; j++ )
    {
        if ( a_element > a[j] ) sum++;
    }
    return sum ;
}

int main ()
{
    int n = 0 , a[105] , less[105] ;
    cin >> n ;

    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }

    for ( int i = 0 ; i < n ; i++ )
    {
        less[i] = find ( a , a[i] , i ) ;
    }

    cout << less[0] ;
    for ( int i = 1 ; i < n ; i++ )
    {
        cout << " " << less[i] ;
    }

    return 0 ;
}