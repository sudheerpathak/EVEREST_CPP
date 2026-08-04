/*
Project No:20
project Title: Calculate the area and perimeter of the rectangle
Concept:VArible, Input, Output
Difficulty: Easy
Written By:Sudheer pathak
date: 21-07-2026
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b, Perimeter, area;
    cout<<"Enter the length of the rectangle=";
    cin>>a;
    cout<<"Enter the widht of the rectangle";
    cin>>b;
    Perimeter= 2*(a+b);
    area=a*b;
    cout<<"The perimter of the rectangle is ="<<Perimeter<<endl;
    cout<<"The area of the rectangle is ="<<area;
    return 0;
}