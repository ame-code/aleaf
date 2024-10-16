#include<iostream>
using namespace std;

int main ()
{
    int n = 0 , day = 1 ;
    cin >> n ;
    unsigned long long sum = 0 ;

    for ( int i = 1 ; day <= n ; i++ )
    {
        for ( int j = 1 ; j <= i && day <= n ; j++ , day++ )
        {
            sum += i ;
            // cout << day << " " << sum << endl ;
        }
    }

    cout << sum ;

    return 0;
}