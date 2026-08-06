/*
Program No: 96
Program Title: Check whether the numbere is armstrong number or not
concept: while loop, if else
Difficulty: easy
Author: Sudheer Pathak
Date: 06-08-2026
*/

#include<iostream>

using namespace std;

int main()

{

    int n, a, temp, x=0;

    cout << "Enter the Number :";
    cin >> n;

        if (n<1)
        {
            cout << "Number is not valid";
            return 0;
        }

        else
        {
            temp = n;

            while ( temp != 0)
            {
                a = temp % 10;
                x = x+ (a*a*a);
                temp = temp /10;
            }
            if (n==x)
            {
                cout << n <<"  is armstrong number:" << endl;
            }

            else 
            {
                cout << n << " is not armstrong number:" << endl;
            }


        }
    return 0;
}