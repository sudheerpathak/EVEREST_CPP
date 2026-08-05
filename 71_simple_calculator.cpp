/*
Program No: 71
Program Title: SImple calculator
COncept: arithemtic operator, switch case
Difficulty:Easy
Author: Sudheer PAthak
Date-05-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    char op;
    float a, b;

    cout << "Enter First Number =";
    cin >> a;

    cout << "Enter second NUmber =";
    cin >> b;

    cout << "Press +, -, *, /, %, default for operation";
    cin >> op;

    switch (op)
    {
        case '+':
            cout << a+b;
            break;

        case '-':
            cout << a-b;
            break;

        case '*':
            cout << a*b;
            break;

        case '/':
            if(b!=0)
            {
                cout << a/b;
                break;
            }
            else
            {
                cout << "division not possible";
                break;
            }

        case '%':
            if (b!=0)
            {
            cout <<(int)a%(int)b;
            break;
            }
            else
            {
                cout << "not possible to calculate";
                break;
            }
          
        default:
            cout << "Invalid operation";
            break;

    }

   return 0;

}