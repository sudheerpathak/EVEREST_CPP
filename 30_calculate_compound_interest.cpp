/*
Project no:30
project Title: calculate compound interest
Concept: variable, input, output
Difficulty:easy
Written By:sudheer pathak
DAte: 22-07-2026
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float p,r,t,ci;
    cout<<"Enter principal amount=";
    cin>>p;
    cout<<"enter rate =";
    cin>>r;
    cout<<"enter time =";
    cin>>t;
    ci= pow((1+r/100),t);
    ci=p*ci-p;
    cout<<"The compound interest is ="<<ci;
    return 0;
    

}