#include<iostream>
using namespace std;
int main()
{
    unsigned long long n = 0 , x = 0 , sum = 1 ;
    cin >> x >> n ;
    for ( int i = 0 ; i < n ; i++ )
    {
        sum += sum * x ;
    }
    cout << sum ;
    return 0 ;
}