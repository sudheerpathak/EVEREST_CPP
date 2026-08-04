/*
Project Number:23
Project Title: Subject mark total and average
Concept: Variable, Input, Output
Difficulty:Easy
Written By:Sudheer Pathak
DAte:21-07-2026
*/

#include<iostream>
using namespace std;

int main()
{
    float average, total, phy, chem, math;

    cout<<"enter the marks of physics=";
    cin>>phy;
    cout<<"enter the marks of chem=";
    cin>>chem;
    cout<<"enter the marks of math=";
    cin>>math;
    total=phy+chem+math;
    average=total/3;
    cout<<"The total marks of subject="<<total;
    cout<<"The average marks of subject is="<<average;
    return 0;
}