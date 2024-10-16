#include<bits/stdc++.h>
using namespace std;

int box[40][40];

void solve()
{
    int n = 0 ;
    cin >> n ;

    box[1][n/2+1] = 1 ;
    int x = 1 , y = n/2+1 ;

    int nn= n*n;
    for ( int i = 2 ; i <= nn ; i++ )
    {
        if ( x == 1 && y != n )
        {
            x = n , y = y+1 ;
            box[x][y] = i ;
        }
        else if ( y == n && x != 1 )
        {
            x = x-1 , y = 1 ;
            box[x][y] = i ;
        }
        else if ( x == 1 && y == n )
        {
            x++ ;
            box[x][y] = i ;
        }
        else if ( x != 1 && y != n )
        {
            if ( !box[x-1][y+1] )
            {
                x-- , y++ ;
                box[x][y] = i ;
            }
            else
            {
                x++;
                box[x][y] = i ;
            }
        }
    }

    for ( int i = 1 ; i <= n ; i++ )
    {
        for ( int j = 1 ; j <= n ; j++ )
        {
            cout << box[i][j] << ' ' ;
        }
        cout << '\n' ;
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}