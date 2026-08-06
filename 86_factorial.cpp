/*
Program No: 86
Program Title:Factorial of a number
Concept : for loop
Difficulty: Easy
Author: sudheer Pathak
Date : 06-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int i, n;
    long long factorial=1;

    cout << "Program to find factorial of a number \n";
    cout << "enter the value of N:";
    cin >> n;

    if (n < 1)
    {
     cout << "Please enter a positive number greater than 0." << endl;
     return 0;
    }

    for ( i = 1; i <= n; i++ )
    {
        factorial = factorial * i;                
    }

    cout << "Factorial of the number  is :" << factorial <<endl;
    return 0;
}