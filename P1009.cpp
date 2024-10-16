#include<bits/stdc++.h>
using namespace std;

int ans[90] = {0,0} , a_mul[90] = {0,1} , b_mul[90] = {0,1} , c_mul[90] = {0,0} , l_a = 0 , l_b = 1 , l_c = 1 ;

void solve( int n )
{
    for ( int i = 1; i <= n ; i++ )
    {
        int c = i ;
        l_a = 0 ;

        //��i��������a_mul
        while( c != 0 )
        {
            a_mul[++l_a] = c % 10 ;
            c /= 10 ;
        }

        //�߾��ȳ˷�
        for ( int j = 1 ; j <= l_a ; j++ )
        {
            for ( int k = 1 ; k <= l_b ; k++ )
            {
                c_mul[j+k-1] += a_mul[j]*b_mul[k] ;
            }
        }
        //��λ
        l_c = l_a+l_b ;
        for ( int j = 1 ; j <= l_c ; j++)
        {
            c_mul[j+1] += c_mul[j]/10 ;
            c_mul[j] %= 10 ;
        }
        //ɾ����λ
        while( c_mul[l_c] == 0 )
        {
            l_c--;
        }
        // for ( int j = 1 ; j <= l_c ; j++ )
        // {
        //     cout << c_mul[j] ;
        // }
        // cout << endl ;
        //��c_mul�������b_mul����
        for ( int j = 1 ; j <= l_c ; j++ )
        {
            b_mul[j] = c_mul[j] ;
        }
        l_b = l_c ;

        //�߾��ȼӷ�
        for ( int j = 1 ; j <= l_c ; j++ )
        {
            ans[j] += c_mul[j] ;
        }
        //��λ
        for ( int j = 1 ; j <= l_c ; j++ )
        {
            ans[j+1] += ans[j]/10 ;
            ans[j] %= 10 ;
        }
        //���ԭ�������λ�Ƿ��λ
        if ( ans[l_c+1] )
        {
            l_c++;
        }
        //c_mul��������
        memset(c_mul,0,sizeof(c_mul));
    }
}

int main()
{
    int n = 0 ;
    cin >> n ;

    solve(n) ;

    for ( int i = l_c ; i >= 1 ; i-- )
    {
        cout << ans[i] ;
    }
    return 0 ;
}