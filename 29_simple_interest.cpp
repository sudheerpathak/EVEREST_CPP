/*
Program No:29
program Title: Simple INterest
Concept: Variable, Input, Output
Difficulty: EAsy
Written By: Sudher Pathak
DAte: 22-07-2026
*/

#include<iostream>
using namespace std;
int main()
{
    int p,r,t,si;
    cout<<"Enter principal amount";
    cin>>p;
    cout<<"enter rate";
    cin>>r;
    cout<<"enter time";
    cin>>t;

    si=p*r*t/100;
    cout<<"The simple interest is="<<si;
    return 0;
}