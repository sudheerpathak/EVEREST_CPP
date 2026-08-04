/*
Project NO: 22
Project Title: SWap 2 number without 3rd variable.
Concept:Varible, Input, Output
Difficullty:EAsy
Written By: Sudheer Pathak
DAte:21-07-2026
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"|Enter the First number=";
    cin>>a;
    cout<<"Enter the second number=";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The first number is="<<a<<endl;
    cout<<"The second number is="<<b;
    return 0;

}