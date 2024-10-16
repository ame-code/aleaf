#include<bits/stdc++.h>
using namespace std;

bool box[21][21][21];

void initialize()
{
    for ( int i = 1 ; i <= 20 ; i++ )
    {
        for ( int j = 1 ; j <= 20 ; j++ )
        {
            for ( int k = 1 ; k <= 20 ; k++ )
            {
                box[i][j][k] = true ;
            }
        }
    }
}

void solve()
{
    initialize();

    int w , x , h , q ;
    cin >> w >> x >> h ;
    cin >> q ;

    while ( q-- )
    {
        int x1 , y1 , z1 , x2 , y2 , z2 ;
        cin >> x1 >> y1 >> z1 ;
        cin >> x2 >> y2 >> z2 ;

        for ( int i = x1 ; i <= x2 ; i++ )
            for ( int j = y1 ; j <= y2 ; j++ )
                for ( int k = z1 ; k <= z2 ; k++ )
                    box[i][j][k] = false ;
    }

    int ans = 0 ;
    for ( int i = 1 ; i <= w ; i++ )
    {
        for ( int j = 1 ; j <= x ; j++ )
        {
            for ( int k = 0 ; k <= h ; k++ )
            {
                if ( box[i][j][k] )
                {
                    ans++;
                }
            }
        }
    }
    cout << ans ;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 1 ;

    while( n-- )
    {
        solve();
    }

    return 0;
}