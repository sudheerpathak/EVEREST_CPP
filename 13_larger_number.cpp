/*
Program No:13
Title: Larger Number
Concept: variables, Input, Ouput, IF.
Difficulty: Easier.
Written By: Sudheer pathak
Date: 21-07-2026
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;

    if (a>b)
    {
    cout<<"the greater number is ="<<a;
    cout<<"the smaler number is ="<<b;
    }

    if (a<b)
    {
    cout<<"the greater number is ="<<b;
    cout<<"the smalller number is ="<<a;
    }
    return 0;
}