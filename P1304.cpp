#include<iostream>
using namespace std;

bool prime[10001] ;

void true_prime(int n )
{
    for(int i = 0 ; i <= 10001 ; i++ )
        prime[i] = 1 ;

    prime[0] = prime[1] = 0 ;

    for ( int p = 2 ; p*p <= n ; p++ )
    {
        if( prime[p] )
        {
            for ( int i=p*p ; i <= n ; i += p )
            {
                prime[i] = 0 ;
            }
        }
    }
}

int main()
{
    int n = 0 ;
    cin >> n ;
    true_prime(n);

    int first_num = 0 , second_num = 0 ;
    for ( int i = 4 ; i <= n ; i += 2)
    {
        int j = 2 ;


        while( 1 )
        {
            if ( prime[ i-j ] )
            {
                first_num = j ;
                second_num = i - j ;
                break;
            }

            j++ ;

            while(!prime[j])
            {
                j++;
            }
        }

        cout << i << "=" << first_num << "+" << second_num << endl ;
    }
    
    return 0 ;
}