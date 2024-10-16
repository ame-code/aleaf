#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , k ;
    cin >> n >> k ;
    double sum_k = 0 , num_k = 0 , sum_no_k = 0 , num_no_k = 0 ;

    for(int i = 1 ; i <= n ; i++ )
    {
        if ( i % k == 0 )
        {
            sum_k += i ;
            num_k++;
        }
        else
        {
            sum_no_k += i ;
            num_no_k++ ;
        }
    }

    cout << fixed << setprecision(1) << sum_k / num_k << " " ;
    cout << fixed << setprecision(1) << sum_no_k / num_no_k ;

    return 0;
}