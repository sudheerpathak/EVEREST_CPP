/*
Program NO:69
Program Title: Largest among three number.
Concept: And, or, else if else etc.
Difficulty: easy
Author:Sudher Pathak
Date: 2-08-2026
*/

#include<iostream>

using namespace std;

int main()

{
    int a, b, c;

    cout<<"Enter The First Number=";
    cin>>a;

    cout<<"Enter The Second number =";
    cin>>b;

    cout<<"Enter the third NUmber";
    cin>>c;

    // Assume that a is the largest number.

    int Largest = a;

    // Let us compare b with Largest number
    if (b > Largest)
    {
        Largest = b;
    }

    // Let us compare c with largest number
     if (c > Largest)
    {
        Largest = c;
        
    }

   cout << Largest << " is the largest number";

    

    return 0;

}