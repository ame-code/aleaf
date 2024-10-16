#include<bits/stdc++.h>
using namespace std;

bool prime[100000005];

void is_prime( int n )
{
    memset(prime,1,sizeof(prime));

    prime[0] = prime[1] = 0;

    for ( int i = 2; i*i <= n ; i++ )
    {
        if(prime[i])
        { 
            for ( int j = 2 ; i*j <= n ; j++ )
            {
                prime[i*j] = 0 ;
            }
        }
    }
}

bool check( int n )
{
    int l = 0 , m = n ;
    while( m != 0 )
    {
        l++,m/=10;
    }

    // string s = "0" ;
    // while ( n != 0 )
    // {
    //     s += ( n%10 + '0' ) ;
    //     n /= 10 ;
    // }

    // for ( int i = 1 ; i <= l/2 ; i++ )
    // {
    //     if ( s[i] != s[l-i+1] )
    //     {
    //         return 0;
    //     }
    // }

    int temp = 0 , l2 = l/2 ;
    while ( l2-- )
    {
        temp = temp*10 + n%10 ;
        n /= 10;
    }
    if(l%2)
    {
        n /= 10 ;
    }
    if ( n != temp )
    {
        return 0;
    }

    return 1;
}

void solve()
{
    int a , b ;
    cin >> a >> b ;
    if ( b >= 10000000) b = 9999999;

    is_prime(b);

    for ( int i = a ; i <= b ; i++ )
    {
        if ( prime[i] && check(i) )
            cout << i << '\n' ;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    
    while(t--)
    {
        solve();
    }

    return 0;
}