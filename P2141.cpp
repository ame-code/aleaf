#include<bits/stdc++.h>
using namespace std;

int a[105] ;
bool b[105] ;

void solve()
{
    int n = 0 ;
    cin >> n ;

    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
        b[i] = false;
    }

    for ( int i = 0 ; i < n-1 ; i++ )
    {
        for ( int j = i+1 ; j < n ; j++ )
        {
            for ( int k = 0 ; k < n ; k++ )
            {
                if ( a[i] + a[j] == a[k] )
                {
                    b[k] = true ;
                }
            }
        }
    }

    int ans = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        ans += b[i] ;
    }
    cout << ans ;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1 ;
    while(t--)
    {
        solve();
    }

    return 0;
}