/*
Project No:21
Project title:Swap two number with the help of third variable
Concept:Variable, Input, Output
Difficulty:Easy
Written By:Sudheer Pathak
Date:21-07-2026
*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the first number=";
    cin>>a;
    cout<<"Enter the second number=";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"The first number is="<<a<<endl;
    cout<<"The second number is="<<b;

}