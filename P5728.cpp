#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n = 0 ;
    cin >> n ;
    int score[1000][3] , sum[1000] ;

    for ( int i = 0 ; i < n ; i++ )
    {
        // for ( int j = 0 ; j < 3 ; j++ )
        // {
        //     cin >> score[i][j] ;
        // }
        cin >> score[i][0] >> score[i][1] >> score[i][2] ;
        sum[i] = score[i][0] + score[i][1] + score[i][2] ;
    }

    int ans = 0 ;
    for ( int i = 0 ; i < n-1 ; i++ )
    {
        for ( int j = i+1 ; j < n ; j++ )
        {
        //     int n = 0;
        //     for ( int k = 0 ; k < 3 ; k++ )
        //     {
        //         if ( abs(score[i][k] - score[j][k]) < 6)
        //         {
        //             dif += abs(score[i][k] - score[j][k]) ;
        //             n++;
        //         }
        //     }
        //     if ( dif < 11 && n == 3 )
        //     {
        //         ans++ ;
        //     }
            
        //     dif = 0 ;
                if
                ( 
                    abs( score[i][0] - score[j][0] ) <= 5 && 
                    abs( score[i][1] - score[j][1] ) <= 5 &&
                    abs( score[i][2] - score[j][2] ) <= 5 && 
                    abs( sum[i] - sum[j] ) <= 10
                )
                {
                    ans++;
                }
        }
    }
    cout << ans ;
    return 0;
}