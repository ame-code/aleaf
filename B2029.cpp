#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pi = 314 ;
    int h = 0 , r = 0 ;
    const int need = 20000 ;
    cin >> h >> r ;

    int v = pi * r * r * h ;
    cout << ceil((double)(need) / ((double)(v)/100) );

    return 0 ;
}