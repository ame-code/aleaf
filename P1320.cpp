#include<iostream>
#include<math.h>
using namespace std ;

string trans ( string jugde )
{
    if ( jugde == "0" )
    {
        return "1" ;
    }
    else 
    {
        return "0" ;
    }
}

int main ()
{
    string input = "0";
    char storage[40010] ;
    int n = 1 ;
    int site = 0 ;

    cin >> input ;
    n = input.size() ;
    for ( int j = 0 ; j < n ; j++ , site++ )
    {
        storage[site] = input[j] ;
    }
    for ( int i = 1 ; i < n ; i ++ )
    {
        cin >> input ;

        for ( int j = 0 ; j < n ; j++ , site++ )
        {
            storage[site] = input[j] ;
        }
    }

    cout << n ;
    int sum = 0 ;
    char num = '0' ;
    for( int i = 0 ; i < n*n ; i++ )
    {
        if ( storage[i] == num )
        {
            sum++ ;
        }
        else
        {
            cout << " " << sum ;
            sum = 1 ;
            num = storage[i];
        }
    }

    cout << " " << sum ;

    return 0 ;
}