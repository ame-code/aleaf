#include<iostream>
using namespace std;

int main()
{
    double m = 0 , h = 0 ;
    cin >> m >> h ;
    double bmi = m / h / h ;

    if ( bmi < 18.5 )
    {
        cout << "Underweight" ;
    }
    else if ( bmi >= 18.5 && bmi <= 24 )
    {
        cout << "Normal" ;
    }
    else
    {
        cout << bmi << endl << "Overweight" ;
    }

    return 0;
}