/*
Program No: 83
Program Title: print even number 1 to n
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

    cout << "Program to find even number between 1 to n";

    cin >> n;
    
    if (n < 1)
    {
     cout << "Please enter a positive number greater than 0." << endl;
    }

    for ( i = 2; i <= n; i+=2 )
    {
        
            cout << i <<" ";
        
        
    }
    return 0;
}