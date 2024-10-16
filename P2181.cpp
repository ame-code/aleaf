#include<bits/stdc++.h>
using namespace std;


int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unsigned long long n = 0 ;
    cin >> n ;

    unsigned long long ans = ( n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4 ) ;
    cout << ans ;

    return 0;
}