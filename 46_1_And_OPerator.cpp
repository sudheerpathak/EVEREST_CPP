/*
Program No:46_1
Program Title: Logical And
Concept: Use of ANd OPerator (logical OPerator)
Difficulty: easy
Written BY: Sudher Pathak
Date:25-07-2026
*/

#include<iostream>

using namespace std;

int main()

{
    int marks, attendance;

    cout<<"Enter Marks";
    cin>>marks;

    cout << "Enter attendance";
    cin >> attendance;

    if ( marks> 90 && attendance > 75)

    {cout<<"Eligible for selection";}

    else {cout << "Not Eligibile for group A"<<endl;}

    if(marks>95 || attendance >80)
    {cout<<" Eligible for group 2"<<endl;}

    if (marks>=75)
    {cout<<"student passed"<<endl;}
     if (attendance != 50)
     {cout<<"fail";}


    return 0;


}