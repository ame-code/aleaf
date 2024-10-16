#include<iostream> 
using namespace std;

int main()
{
    long long a = 0 ;
    cin >> a ;

    for ( int i = 2 ; i*i <= a ; i++ )
    {
        if ( a%i == 0 )
        {
            cout << a/i ;
            return 0;
        }
    }

    return 0;
}