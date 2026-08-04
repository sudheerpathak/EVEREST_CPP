/*
Project No:32
project Title: convert second into hour, min and sec
concept: Variable, Input,Output
Difficulty:EAsy
Written By: Sudheer Pathak
Date:22-07-2026
*/
#include<iostream>
using namespace std;

int main()
{
    int a, b, hour, min, sec;
    cout<<"Enter the value in sec";
    cin>>a;
    hour=a/3600;
    b=a-hour*3600;
    min=b/60;
    sec=b-min*60;
    cout<<"Hour ="<<hour<<endl;
    cout<<"minute ="<<min<<endl;
    cout<<"sec ="<<sec<<endl;

    return 0;
}
