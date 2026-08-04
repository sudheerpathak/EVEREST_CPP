/*
Program No: 51
Program Title:convert second into hour, minute, seconds
Concept: opertaor
Difficulty: easy
Written BY: Sudheer Pathak
Date: 25-07-2026
*/

#include<iostream>
using namespace std;

int main()

{
int a, b, hour, min, sec;

cout << "Enter the value of a";
cin >> a;

hour = a / 3600;
b = a % 3600;
min = b / 60;
sec = b % 60 ;



cout<<hour<< "Hour " <<min <<" minute " << sec << "  Second";

return 0;

}