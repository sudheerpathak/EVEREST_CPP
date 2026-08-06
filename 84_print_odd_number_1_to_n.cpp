/*
Program No: 84
Program Title: print odd number 1 to n
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

    cout << "Program to find odd number between 1 to n \n";
    cout << "enter the value :";
    cin >> n;

    if (n < 1)
    {
     cout << "Please enter a positive number greater than 0." << endl;
    }

    for ( i = 1; i <= n; i+=2 )
    {
           cout << i <<" ";
                
    }
    
    return 0;
}