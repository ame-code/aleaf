#include<iostream>
using namespace std;

int main()
{
    int n = 0 , min_num = 10000000 ;
    cin >> n ;

    for ( int i = 0 ,  a = 0 ; i < n ; i++ )
    {
        cin >> a ;
        min_num = min(a,min_num) ;
    }

    cout << min_num ;

    return 0;
}