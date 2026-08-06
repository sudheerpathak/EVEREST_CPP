/*
Program no: 95
Program Title: fibonacci series
Concept:if else, for loop, while
Difficulty: Easy
Author: sudheer pathak
Date : 06-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int n, i;

    long long a = 0,  b = 1, nextTerm;    

    cout << "enter tha value of terms:" << endl ;
    cin >> n;

    cout <<" Fibonacci Series :";

    for (i = 1; i <= n; i++)
    { 
        if (i==1)
        {
            cout << a << " "; // Prints the first term and goes into next loop due to use of 'continue'. 
            continue; 
        }

        if(i==2)
        {
            cout << b << " "; // prints the second term and goes into next loop.
            continue;
        }
       
       nextTerm = a + b;
       a =b;
       b = nextTerm;
       
       cout << nextTerm << " ";              
    }
    cout << endl;

    return 0;
}