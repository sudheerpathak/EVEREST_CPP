/*
Program No:68
Program Title: check Alphhabet/Digit/Special CHaracter
Difficulty: easy
Concept:if else,character matching
Author: sudheer pathak
Date: 2/8/2026
*/

#include <iostream>

using namespace std;

int main()
{
char ch;

cout<<"Enter the value";
cin>>ch;

if((ch>='A'&&ch<='Z')||(ch>='a'&& ch<='z'))
{
    cout<<ch<<" is alphabet";
}

else if (ch>='0'&& ch<='9')
{
    cout<<ch<<" the value is digit";
}
else
{
    cout<<ch<<" The value is special character";
}
return 0;
}