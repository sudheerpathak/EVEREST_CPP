/*
Program no: 81
Program Title: print n to 1
Concept: for loop
Difficulty: Easy
Authhor:Sudheer Pathak
Date: 05-08-2026
*/

#include<iostream>

using namespace std;

int main()

{
     int i, n;
    cout << "Enter the value of 'n' :";
    cin >> n;

    for (i=n; i>=1; i--)
    {
        cout << i << " " ;
    }

    return 0;
}