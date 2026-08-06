/*
Program No: 85
Program Title:find the sum of first N natural numbers
Concept : for loop
Difficulty: Easy
Author: sudheer Pathak
Date : 06-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int i, n, sum=0;

    cout << "Program to find sum of first N natural number \n";
    cout << "enter the value of N:";
    cin >> n;

    if (n < 1)
    {
     cout << "Please enter a positive number greater than 0." << endl;
    }

    for ( i = 1; i <= n; i++ )
    {
        sum=sum+i;
            cout << sum <<" ";
           
    }

    cout << "Final sum is :" << sum <<endl;
    return 0;
}