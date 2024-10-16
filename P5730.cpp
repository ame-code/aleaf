#include<bits/stdc++.h>
using namespace std;

int on[10][14] =
{
    {12,00,01,02,10,12,20,22,30,32,40,41,42},
    {5,02,12,22,32,42},
    {11,00,01,02,12,20,21,22,30,40,41,42},
    {11,00,01,02,12,20,21,22,32,40,41,42},
    {9,00,02,10,12,20,21,22,32,42},
    {11,00,01,02,10,20,21,22,32,40,41,42},
    {12,00,01,02,10,20,21,22,30,32,40,41,42},
    {7,00,01,02,12,22,32,42},
    {13,00,01,02,10,12,20,21,22,30,32,40,41,42},
    {12,00,01,02,10,12,20,21,22,32,40,41,42}
};
char ans[5][400];

void solve()
{
    int n = 0 ;
    cin >> n ;

    for ( int i = 0 ; i < 5 ; i++ )
    {
        for ( int j = 0 ; j < 400 ; j++ )
        {
            ans[i][j] = '.' ;
        }
    }

    string s = "" ;
    cin >> s ;
    for ( int i = 0 ; i < n ; i++ )
    {
        int m = s[i] - '0' ;
        int x = 0 , y = i*4 , z = on[m][0];
        for ( int j = 1 ; j <= z ; j++ )
        {
            int a = on[m][j]/10 , b = on[m][j]%10 ;
            ans[x+a][y+b] = 'X' ;
        }
    }

    for ( int i = 0 ; i < 5 ; i++ )
    {
        for ( int j = 0 ; j < n*4-1 ; j++ )
        {
            cout << ans[i][j] ;
        }
        cout << '\n' ;
    }
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