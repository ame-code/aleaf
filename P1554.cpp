#include<iostream>
using namespace std ;

int main ()
{
    int n = 0 , m = 0 ;
    cin >> n >> m ;

    int sum1 = 0 , sum2 = 0 , sum3 = 0 , sum4 = 0 , sum5 = 0 , sum6 = 0 , sum7 = 0 , sum8 = 0 , sum9 = 0 ,sum0 = 0 ;

    for ( int i = n ; i <= m ; i++ )
    {
        int x = i ;
        while( x != 0 )
        {
            switch ( x % 10 )
            {
                case 0 :
                    sum0++;
                    break;
                case 1 :
                    sum1++;
                    break;
                case 2 :
                    sum2++;
                    break;
                case 3 :
                    sum3++;
                    break;
                case 4 :
                    sum4++;
                    break;
                case 5 :
                    sum5++;
                    break;
                case 6 :
                    sum6++;
                    break;
                case 7 :
                    sum7++;
                    break;
                case 8 :
                    sum8++;
                    break;
                case 9 :
                    sum9++;
                    break;
            }
            x /= 10 ;
        }
    }

    cout << sum0 << " " 
         << sum1 << " " 
         << sum2 << " " 
         << sum3 << " " 
         << sum4 << " " 
         << sum5 << " " 
         << sum6 << " " 
         << sum7 << " " 
         << sum8 << " " 
         << sum9 ;

    return 0 ;
}