#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double t = 0 ;
    int n = 0 ;
    cin >> t >> n ;
    if ( n == 0 )
    {
        cout << fixed << setprecision(3) << t << endl << n ;
        return 0;
    }
    t /= n ;
    cout << fixed << setprecision(3) << t << endl << n*2 ;
    return 0;
}