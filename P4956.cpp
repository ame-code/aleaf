#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    int n = 0;
    cin >> n ;

    for ( int x = 0, k = 1; ; k++ )
    {
        x = ( n - 1092*k ) / 364 ;
        if ( 364*x + 1092*k == n && x <= 100 )
        {
            cout << x << '\n' << k ;
            break;
        }
    }
}

int main()
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