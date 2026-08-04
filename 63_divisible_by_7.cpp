/*
Program No: 63
program Title: divisible by 7
Concept =modulo, if else
Difficulty: EAsy
Author:Sudheer Pathak
Date:26-07-2026
*/

#include<iostream>

using namespace std;

int main()

{
    int a , b;
    cout<<"Enter the value";
    cin>>a;

    if(a%7==0)
    {
        cout << "The value is divisible";
    }

    else
    {
        cout << "Value is not divisible";
    }

    return 0;
}