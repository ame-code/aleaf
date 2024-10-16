#include<bits/stdc++.h>
using namespace std;

int pirze[7] , lottery[8] = {0} , ans [8] = {0} ;

void solve()
{
    for ( int i = 0 ; i <= 7 ; i++ )
    {
        pirze[i]=0;
    }

    int n = 0 , p = 0 ;
    cin >> n ;

    for ( int i = 1 ; i <= 7 ; i++ )
    {
        cin >> ans[i];
    }

    while(n--)
    {
        for ( int i = 1 ; i <= 7 ; i++ )
        {
            cin >> lottery[i] ;
        }

        for ( int i = 1 ; i <= 7 ; i++ )
        {
            for ( int j = 1 ; j <= 7 ; j++ )
            {
                if ( lottery[i] == ans[j] )
                {
                    p++;
                }
            }
        }

        if ( p )
        {
            pirze[7-p]++;
        }

        p = 0 ;
    }

    for ( int i = 0 ; i < 7 ; i++ )
    {
        cout << pirze[i] << ' ' ;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}