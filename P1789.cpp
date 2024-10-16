#include<iostream>
using namespace std ;

int matrix[101][101] ;
//a表示方阵  glowstone表示萤石的坐标  torch表示火把的坐标

int n = 0 , m = 0 , k = 0 ;
//n为矩阵边长  m为火把数量  k为萤石数量

void initialize ();
//声明初始化数组的函数

void set_torch( int , int );
//声明点亮火把周围的函数

void set_glowstone( int , int );


int in ( int x , int y )
{
    return ( x >= 1 && x <= n && y >= 1 && y <= n ) ;
}

int main ()
{
    initialize();//初始化所有数组

    cin >> n >> m >> k ;//输入矩阵边长 火把数量 萤石数量

    //输入火把坐标
    for ( int i = 0 ; i < m ; i++ )
    {
        int x = 0 , y = 0 ;
        cin >> x >> y ;
        set_torch( x , y ) ;
    }

    //输入萤石坐标
    if ( k != 0 )
    {
        for ( int i = 0 ; i < k ; i++ )
        {
            int x = 0 , y = 0 ;
            cin >> x >> y ;
            set_glowstone( x , y ) ;
        }
    }

    //检测刷怪点
    int sum = 0 ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        for ( int j = 1 ; j <= n ; j++ )
        {
            sum += (!matrix[i][j]) ;
            // cout << matrix[i][j] ;
        }
        // cout << endl ;
    }

    cout << sum ;

    return 0;
}

//初始化所有数组
void initialize ()
{
    for ( int i = 0 ; i < 101 ; i++ )
    {
        for ( int j = 0 ; j < 101 ; j++ )
        {
            matrix[i][j] = 0 ;
        }
    }
}

//将火把周围点亮
void set_torch( int x , int y )
{
    for ( int i = y-2 ; i <= y+2 ; i++ )
    {
        if ( in(x,i) == true )
            matrix[x][i] = 1 ;
    }
    for ( int i = x-2 ; i <= x+2 ; i++ )
    {
        if ( in(i,y) == true )
            matrix[i][y] = 1 ;
    }
    if ( in(x-1,y-1) == true )
        matrix[x-1][y-1] = 1 ;
    if ( in(x-1,y+1) == true )
        matrix[x-1][y+1] = 1 ;
    if ( in(x+1,y+1) == true )
        matrix[x+1][y+1] = 1 ;
    if ( in(x+1,y-1) == true )
        matrix[x+1][y-1] = 1 ;
}

//将萤石周围点亮
void set_glowstone( int x , int y )
{
    for ( int i = x-2 ; i <= x+2 ; i++ )
    {
        for ( int j = y-2 ; j <= y+2 ; j++ )
        {
            if ( in(i,j) == true )
                matrix[i][j] = 1 ;
        }
    }
}