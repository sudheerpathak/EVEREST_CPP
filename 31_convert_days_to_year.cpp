/*
Project No:31
Project Title:convert days to year
Concept:VAriable, Input, output
Difficulty:EAsy
Written BY: sudheer pathak
Date: 22-07-2026
*/
#include<iostream>
using namespace std;

int main()
{
    int a, b, year, month, days;
    cout<<"Enter number of days";
    cin>>a;
    year=a/365;
    b=a-year*365;
    month=b/30;
    days=b-month*30;
    cout<<"year ="<<year<<endl;
    cout<<"month ="<<month<<endl;
    cout<<"days ="<<days;

    return 0;

}