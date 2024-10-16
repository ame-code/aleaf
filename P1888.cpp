#include<iostream>
using namespace std;

int gcd ( int max_num , int min_num )
{
    if (!min_num) return max_num ;
    else return gcd( min_num , max_num%min_num ) ;
}

int main ()
{
    int a = 0 , b = 0 , c = 0 ;
    cin >> a >> b >> c ;

    int min_num = min ( a , min ( b , c ) ) ;
    int max_num = max ( a , max ( b , c ) ) ;
    int gcd_num = gcd ( max_num , min_num ) ;
    min_num /= gcd_num , max_num /= gcd_num ;

    cout << min_num << "/" << max_num ;

    return 0;
}