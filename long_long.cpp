#include<iostream>
using namespace std ;

long long max( long long xl , long long xu )
{
    return ( xl > xu ? xl : xu ) ;
}

int main ()
{
    long long xl = 0 , xu = 0 , yl = 0 , yu = 0 ;
    cin >> xl >> xu ;
    cin >> yl >> yu ;

    if ( xl * yl > 2147483647 || xl * yu > 2147483647 || xu * yl > 2147483647 || xu * yu > 2147483647 )
    {
        cout << "long long int" ;
    }
    else if ( xl * yl < -2147483648 || xl * yu < -2147483648 || xu * yl < -2147483648 || xu * yu < -2147483648 )
    {
        cout << "long long int" ;
    }
    else
    {
        cout << "int" ;
    }

    return 0 ;
}