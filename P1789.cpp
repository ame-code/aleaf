#include<iostream>
using namespace std ;

int matrix[101][101] ;
//a��ʾ����  glowstone��ʾөʯ������  torch��ʾ��ѵ�����

int n = 0 , m = 0 , k = 0 ;
//nΪ����߳�  mΪ�������  kΪөʯ����

void initialize ();
//������ʼ������ĺ���

void set_torch( int , int );
//�������������Χ�ĺ���

void set_glowstone( int , int );


int in ( int x , int y )
{
    return ( x >= 1 && x <= n && y >= 1 && y <= n ) ;
}

int main ()
{
    initialize();//��ʼ����������

    cin >> n >> m >> k ;//�������߳� ������� өʯ����

    //����������
    for ( int i = 0 ; i < m ; i++ )
    {
        int x = 0 , y = 0 ;
        cin >> x >> y ;
        set_torch( x , y ) ;
    }

    //����өʯ����
    if ( k != 0 )
    {
        for ( int i = 0 ; i < k ; i++ )
        {
            int x = 0 , y = 0 ;
            cin >> x >> y ;
            set_glowstone( x , y ) ;
        }
    }

    //���ˢ�ֵ�
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

//��ʼ����������
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

//�������Χ����
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

//��өʯ��Χ����
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