#include<iostream>
using namespace std;

int main ()
{
    string a ;
    getline( cin , a );
    long long l = a.length() , sum = 0 ;

    for ( int i = 0 ; i < l ; i++ )
    {
        switch(a[i])
        {
            case 'a':
                sum += 1 ;
                break;
            case 'b':
                sum += 2;
                break;
            case 'c':
                sum += 3;
                break;
            case 'd':
                sum += 1;
                break;
            case 'e':
                sum += 2;
                break;
            case 'f':
                sum += 3;
                break;
            case 'g':
                sum += 1;
                break;
            case 'h':
                sum += 2;
                break;
            case 'i':
                sum += 3;
                break;
            case 'j':
                sum += 1;
                break;
            case 'k':
                sum += 2;
                break;
            case 'l':
                sum += 3;
                break;
            case 'm':
                sum += 1;
                break;
            case 'n':
                sum += 2;
                break;
            case 'o':
                sum += 3;
                break;
            case 'p':
                sum += 1;
                break;
            case 'q':
                sum += 2;
                break;
            case 'r':
                sum += 3;
                break;
            case 's':
                sum += 4;
                break;
            case 't':
                sum += 1;
                break;
            case 'u':
                sum += 2;
                break;
            case 'v':
                sum += 3;
                break;
            case 'w':
                sum += 1;
                break;
            case 'x':
                sum += 2;
                break;
            case 'y':
                sum += 3;
                break;
            case 'z':
                sum += 4;
                break;
            case ' ':
                sum += 1;
                break;
        }
    }
    cout << sum ;
    return 0;
}