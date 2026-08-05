/*
Program No:77
program Title: electricity bill (simple slab)
concept: switch, if else, do while etc
difficulty: easy
Author: sudheer pathak
Date: 05-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
   float a, b;

    cout << "calculate electricity bill, enter unit"<< endl;

    cin >> a;

    if (a==0)
    {
        cout<< "only meter rent"<<endl;
    }

    else if (a>0 && a<=100)
    {
        b = a*5;
        cout << b <<" total bill";
    }

    else if (a>100 && a<=150)
    {
        b= (a-100)*5.5 +500;
        cout << b <<"total bill";
    }

    else if (a>150 && a<=300)
    {
        b=(a-150)*6 + 500 + 275;
        cout << b << "total bill";
    }

    else if (a>300 && a<=500)
    {
        b=(a-300)*6.5 + 500 + 275 + 900;
        cout << b << "total bill";
    }

    else
    {
        b=(a-500)*7 + 1300 + 900 + 275 + 500;
        cout << b << "total bill";
    }

    return 0;

}