/*
Program No:59
Program Title: Smallest of two numbers
Difficulty:Easy
Concept:if-else
Author:Sudheer Pathak
Date:26-07-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int a , b;
    
    cout << "Enter value = ";
    cin>>a;

    cout << "Enter value = ";
    cin>>b;

    if (a<b)
    {
        cout <<a<< " = is smallest value";

        }

    else {cout << b << " = is smallest value";}

    return 0;

}