/*
Program No:79
Program title: triangle validity
concept: inequality
difficulty: easy
Author:Sudheer Pathak
Date:05-08-2026
*/
#include<iostream>

using namespace std;

int main()

{
cout << "Program to check triangle validity \n";

int a, b, c;

cout << "Enter the length of side 'a'of triangle :";
cin >>a;

cout << "Enter the length of side 'b'of triangle :";
cin >>b;

cout << "Enter the length of side 'c'of triangle :";
cin >>c;

if (a+b > c && b+c >a && c+a >b)
{
    cout << "the triangle is valid";
}

else 
{
    cout << "triamgle is valid";
}

    return 0;
}