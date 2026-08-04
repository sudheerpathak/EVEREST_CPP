/*
Program No: 53
Program Title:Swap two number using arithmetic operator
Concept: Logical operator, arithmetic operator
Difficulty: easy
Written BY: Sudheer Pathak
Date: 25-07-2026
*/
#include<iostream>

using namespace std;

int main()

{
    int a, b;

    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;

    
    a=a+b;
    b=a-b;
    a=a-b;

    
    cout<<"The swaped number are ="<<a<<"   "<<b;

    return 0;

}
