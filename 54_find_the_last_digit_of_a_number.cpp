/*
Program No: 54
Program Title:Find the last digit of a numbber
Concept: arithmetic operator
Difficulty: easy
Written BY: Sudheer Pathak
Date: 25-07-2026
*/
#include<iostream>

using namespace std;

int main()

{
    int a;

    cout<<" Enter the number";
    cin>>a;

   a=a%10;

    cout<< "he last digit is="<<a;

    return 0;
}