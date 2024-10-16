#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0 ;
    cin >> x ;

    bool a = !(x%2) , b = false ;
    if ( x > 4 && x <= 12 ) b = true ;

    cout << (a&&b) << " " << (a||b) << " " << (a != b) << " " << !(a||b) ;

    return 0;
}