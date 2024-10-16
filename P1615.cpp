#include<iostream>
using namespace std ;

int main()
{
    long long a , b , c , d , e , f , v ; char x ;
    cin >> a >> x >> b >> x >> c >> d >> x >> e >> x >> f >> v ;
    cout << ( (d*3600) + (e*60) + f - (a*3600) - (b*60) - c ) * v ;

    return 0 ;
}