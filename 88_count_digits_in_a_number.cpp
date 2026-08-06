/*
Program No: 88
Program Title : Count digits in a number
Concept: if else, whhile
Difficulty: easy
Author: Sudheer pathak
Date:06-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    long long n;

    int count = 0;

    cout << "The program is to count the number of digits in the number\n";
    cout << "Enter the digits :";
    cin >> n;

    if (n<0)
    {
        n = -n;        
    }

    if (n == 0)
    {
        count = 1;
    }

    else {
           
        while(n!=0)
        {
             n = n / 10;
           count++;
        }

        }
    cout<< "number of digits :" << count <<endl;

    return 0;
}