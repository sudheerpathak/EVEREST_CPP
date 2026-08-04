/*
Program No: 14
Title: calculate are, circumference of the circle
Concept: Variable, Input, output
Difficulty: EAsy
Written By: Sudheer Pathak
Date: 21-07-2026
*/

#include<iostream>
using namespace std;
int main()
{
    float r, d,c,a;

    cout<<"Enter the radius of the circle= ";
    cin>>r;
    d=2*r;
    cout<<"The diameter is="<<d<<endl;
    c=2*3.14*r;
    cout<<"The circumference is= "<<c<<endl;
    a=3.14*r*r;
    cout<<"The area is= "<<a<<endl;3

    return 0;

}