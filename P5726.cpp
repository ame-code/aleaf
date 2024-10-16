#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n = 0 ;
    cin >> n ;

    int score[1005];
    for ( int i = 0 ; i < 1005 ; i++ )
    {
        score[i] = -1 ;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> score[i] ;
    }

    int max_s = -1000 , min_s = 11000 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( score[i] > max_s/1000 )
        {
            max_s = score[i]*1000 + i ;
        }
        if ( score[i] < min_s/1000 )
        {
            min_s = score[i]*1000 + i ;
        }
    }
    score[max_s%1000] = score[min_s%1000] = -1 ;

    int sum = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( score[i] > 0 )
        {
            sum += score[i] ;
        }
    }
    double ans = (double)(sum) / (n-2) ;

    cout << fixed << setprecision(2) << ans ;

    return 0;
}