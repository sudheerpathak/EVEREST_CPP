/*
Project Number:27
Project Title: Calculate percentage of five subject
Concept:Varible,Input, output
Difficulty: EAsy
Written By: Sudheer Pathak
DAte: 22-07-2026
*/

#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    cout<<"Enter the first no=";
    cin>>a;
    cout<<"Enter the second no=";
    cin>>b;
    cout<<"Enter the third no=";
    cin>>c;
    cout<<"Enter the fourth no=";
    cin>>d;
    cout<<"Enter the fifth no=";
    cin>>e;

    f=a+b+c+d+e;
    f=f/500*100;
    cout<<"the percentage is="<<f<<"%";
    return 0;


}