#include<iostream>
using namespace std ;

int main ()
{
    /*
    n: 矩阵边长
    zip: 用于顺序储存矩阵压缩后的值
    matrix: 用于输出矩阵
    zero_or_one: 依次交换记录0和1
    */
    int n = 0 , zip[20001] , matrix[20001] , site = 1 , zero_or_one = 0 ;
    cin >> n ;

    /*
    i: 用于zip数组
    while_judge: 判断跳出循环的时机
    该while用于记录矩阵准备输出
    */
    int i = 0 ;
    int while_judge = 0 ;
    while_judge = n * n ;
    while ( while_judge != 0 )
    {
        cin >> zip[i] ;

        if ( zero_or_one == 0 )
        {
            for ( ; zip[i] != 0 ; )
            {
                matrix[site] = zero_or_one ;
                site++ ;
                zip[i]-- ;
                while_judge-- ;
            }

            zero_or_one = 1 ;
        }
        else
        {
            for ( ; zip[i] != 0 ; )
            {
                matrix[site] = zero_or_one ;
                site++ ;
                zip[i]-- ;
                while_judge-- ;
            }

            zero_or_one = 0 ;
        }

        i++ ;
    }
    
    for ( int i = 0 ; ( i + 1 ) * n <= n*n ; i++ )
    {
        for ( int j = 1 ; j <= n ; j++ )
        {
            cout << matrix[ n*i + j ] ;
        }
        cout << endl ;

    }
    return 0 ;
}