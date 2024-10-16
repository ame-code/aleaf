#include<iostream>
using namespace std;

int main()
{
    int n = 0 ;
    int a1 = 0 , a2 = 0 , b1 = 0 , b2 = 0 , c1 = 0 , c2 = 0 ;
    cin >> n >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 ;

    int money1 = 0 , money2 = 0 , money3 = 0 ;
    money1 = ( n/a1 + (bool)(n%a1) ) * a2 ;
    money2 = ( n/b1 + (bool)(n%b1) ) * b2 ;
    money3 = ( n/c1 + (bool)(n%c1) ) * c2 ;

    cout << min ( money1 , min( money2 , money3 ) ) ;

    return 0;
}