#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3] ;
    for ( int i = 0 ; i < 3 ; i++ )
    {
        cin >> a[i] ;
    }

    sort(a,a+3) ;

    string b ;
    cin >> b ;

    cout << a[ b[0] - 'A' ] << " " << a[ b[1] - 'A' ] << " " << a[ b[2] - 'A' ] ;

    return 0;
}