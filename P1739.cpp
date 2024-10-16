#include<iostream>
using namespace std;

int main ()
{
    int left = 0 , right = 0 ;
    char x ;

    for ( int i = 0 ; x != '@' ; i++ )
    {
        cin >> x ;

        if ( i==0 && x ==')' )
        {
            cout << "NO" ;
            return 0 ;
        }
        if ( x == '(' )
        {
            left++;
        }
        else if ( x == ')' )
        {
            right++;
            if ( left < right )
            {
                cout << "NO" ;
                return 0 ;
            }
        }
    }

    if ( left == right )
    {
        cout << "YES" ;
    }
    else 
    {
        cout << "NO" ;
    }

    return 0;
}