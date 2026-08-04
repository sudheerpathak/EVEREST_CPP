/*
Project Number:25
project Title:Convert fahernheit to celsius
Concept: variable, Input, Output
Difficulty: easy
Written By:Sudheer Pathak
DAte:21-07-2026
*/

#include<iostream>
using namespace std;
int main()
{
float C,F;
cout<<"Enter the temperature in Fahernheit=";
cin>>F;
C=(F-32)*5/9;
cout<<"The temperature in degree celsius="<<C;
return 0;
}