#include<iostream>
using namespace std ;

int main ()
{
    string l ;
    cin >> l ;

    int site[256] ;
    for ( int i = 0 ; i < 256 ; i++ )
    {
        site[i] = 0 ;
    }

    int n = 0 ;
    n = l.size() ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( l[i] == 'b' )    site[i]++ ;

        else if ( l[i] == 'o' )
        {
            if ( l[i-1] == 'b' )    site[i-1]++ ;
            else    site[i]++;
        }

        else if ( l[i] == 'y' )
        {
            if ( l[i-2] == 'b' )    site[i-2]++ ;
            else if ( l[i-1] == 'o' )   site[i-1]++ ;
            else    site[i]++ ;
        }

        if ( l[i] == 'g' )  site[i]-- ;

        else if ( l[i] == 'i' )
        {
            if ( l[i-1] == 'g' )    site[i-1]-- ;
            else    site[i]-- ;
        }

        else if ( l[i] == 'r' )
        {
            if ( l[i-2] == 'g' )    site[i-2]-- ;
            else if ( l[i-1] == 'i')    site [i-1]-- ;
            else    site[i]-- ;
        }

        else if ( l[i] == 'l' )
        {
            if ( l[i-3] == 'g' )    site[i-3]-- ;
            else if ( l[i-2] == 'i' )   site[i-2]-- ;
            else if ( l[i-1]  == 'r' )  site[i-1]-- ;
            else    site[i]-- ;
        }
    }

    int sum_boy = 0 , sum_girl = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( site[i] > 0 )
            sum_boy++ ;
        else if ( site[i] < 0 )
            sum_girl++ ;
    }

    cout << sum_boy << endl << sum_girl ;

    return 0 ;
}