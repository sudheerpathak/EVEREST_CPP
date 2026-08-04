/*
Program No:56
Program Title: Positive negative zero
Difficulty:Easy
Concept:if-else
Author:Sudheer Pathak
Date:26-07-2026
*/
#include<iostream>

using namespace std;

int main()

{
    int a ;

    cout << "check whether positive, negative, zero \n";
    cout << "Enter value";
    cin >> a;

    if(a>0)
    {cout << "The value is positive ";}

    else if(a==0)
    {cout << "The value is zero";}

    else
    {cout << " The value is negative";}

    return 0;

}