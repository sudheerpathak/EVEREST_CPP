/*
Program No: 50
Program Title:simple  GST Calculator  at 18 %
Concept: Logical operator
Difficulty: easy
Written BY: Sudheer Pathak
Date: 25-07-2026
*/

#include<iostream>
using namespace std;

int main ()

{
int a, b, c;

cout<<"Enter the value of item";
cin>>a;

b=a*18/100;

cout<<"gst is ="<<b<<"\n";

cout<<"total bill is = "<<b+a;
return 0;

}