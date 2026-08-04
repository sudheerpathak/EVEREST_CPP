/*
Program NO:64
Program Title: Divisible by both 5 & 7
Concept: AND, if else, modulo
Difficulty: EAsy
Author: Sudheer Pathak
Date:26-07-2026
*/

#include<iostream>

using namespace std;

int main()

{
    int a ;
    cout<<"Enter the first value";
    cin>>a;

    
    if (a%5==0 & a%7==0)
    {
        cout<<"The values are divisible by both 5 and 7";
    }

    else
    {
        cout<< "The number may either divisble by 5 or 7 not by both";
    }

    return 0;
}