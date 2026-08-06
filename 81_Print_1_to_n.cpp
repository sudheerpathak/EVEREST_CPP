/*
Program no: 81
Program Title: Print 1 to n
Concept: for loop
Difficulty: Easy
Authhor:Sudheer Pathak
Date: 05-08-2026
*/

#include<iostream>

using namespace std;

int main()

{ int i, n;
    cout << "Enter the value of 'n' :";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        cout << " print : "<< i <<endl;
    }
    return 0;
}