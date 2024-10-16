#include<bits/stdc++.h>
using namespace std;

int ans[81] ;

void solve()
{
    int s1 = 0 , s2 = 0 , s3 = 0 ;
    cin >> s1 >> s2 >> s3 ;

    for ( int i = 1 ; i <= s1 ; i++ )
    {
        for ( int j = 1 ; j <= s2 ; j++ )
        {
            for ( int k = 1 ; k <= s3 ; k++ )
            {
                ans[i+j+k]++;
            }
        }
    }

    int a = 0 ;
    for ( int i = 1 ; i < s1+s2+s3 ; i++ )
    {
        a = max(a,ans[i]) ;
    }
    cout << a ;
}

int main ()
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