/*
Program No:17
Project Title:convert to hours , min, sec
Concept: Variables, Input, Output
Difficulty:Easy
Written By: Sudheer Pathhak
Date:21-07-2026
*/

#include<iostream>
using namespace std;

int main()
{
    int a, hour, minute, second;

    cout<<"Enter the hour";
    cin>>a;

    minute=a*60;
    cout<<"The minute is ="<<minute<<endl;

    second=minute*60;
    cout<<"The second is ="<<second;

    return 0;
}