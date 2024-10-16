#include<cstdio>
using namespace std ;

int main ()
{
    int a[3] = {0,0,0}; char s1 = '0', s2 = '0' ;
    while ( scanf ("%c:=%c;",&s1,&s2) == 2 )
    {
        a[s1-'a'] = ( s2 >= '0' && s2 <= '9' ? s2-'0' : a[s2-'a'] ) ;
    }
    printf("%d %d %d" , a[0] , a[1] , a[2] ) ;

    return 0 ;
}