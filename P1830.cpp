#include<iostream>
using namespace std;

int main()
{
    int city[101][101];
    int n = 0 , m = 0 , x = 0 , y = 0 ;
    cin >> n >> m >> x >> y ;

    for ( int i = 0 ; i <= n ; i++ )
    {
        for ( int j = 0 ; j <= m ; j++ )
        {
            city[i][j] = 0 ;
        }
    }

    for ( int i = 1 , x1 = 0 , y1 = 0 , x2 = 0 , y2 = 0 ; i <= x ; i++ )
    {
        cin >> x1 >> y1 >> x2 >> y2 ;
        for ( int j = x1 ; j <= x2 ; j++ )
        {
            for ( int k = y1 ; k <= y2 ; k++ )
            {
                ++city[j][k];
                city[j][k] = (city[j][k]%1000) + (i)*1000 ;
            }
        }
    }

    for ( int i = 1 , m = 0 , n = 0 ; i <= y ; i++ )
    {
        cin >> m >> n ;
        if ( city[m][n] )
        {
            cout << "Y " << city[m][n]%1000 << " " << city[m][n]/1000 << endl ;
        }
        else
        {
            cout << 'N' << endl ;
        }
    }

    return 0;
}