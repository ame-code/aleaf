#include<iostream>
using namespace std;

bool prime[100000];

void initialize( int l )
{
    for ( int i = 0 ; i <= l ; i++ )
    {
        prime[i] = true ;
    }
    prime[0] = prime[1] = false ;
}

void find_prime( int l )
{
    for ( int i = 2 ; i*i <= l ; i++ )
    {
        if ( prime[i] )
        {
            for ( int j = 2 ; i*j <= l ; j++ )
            {
                prime[i*j] = false ;
            }
        }
    }
}

int main()
{
    int l = 0 ;
    cin >> l ;

    initialize( l );

    find_prime( l );

    int sum = 0 , sum_num = 0 ;
    if ( l == 1 )
    {
        cout << 0 ;
        return 0;
    }
    for ( int i = 0 ; sum <= l ; i++ )
    {
        if ( prime[i] )
        {
            if ( sum + i <= l )
            {
                cout << i << endl ;
                sum += i ;
                sum_num++ ;
            }
            else
            {
                cout << sum_num ;
                break;
            }
        }
    }

    return 0;
}