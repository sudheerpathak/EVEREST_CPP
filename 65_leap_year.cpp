/*
Program No:  65
Program title: Leap Year (simple version)
COncept:modulo,if-else, modulo
difficulty: Easy
Author:Sudheer pathak
Date:26-07-2026

*/

#include<iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter the year =" ;
    cin >> a;

    if ( a % 4 == 0 && a % 100 != 0 )
    {
        cout << "The given year is leap year";
    }

    else if (a % 400 == 0)

    {
        cout << "The year is leap year";
    }

    else 
    {
        cout << "Not a leap year";
    }
    return 0;

}