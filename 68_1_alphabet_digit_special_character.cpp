/*
Program N0: 68_1
Program Title: Check the whether the value is alphabet/ digit /special character 
Difficulty: Easy
COncept: if , else if , isalpha, isdigit
Author: sudheer Pathak
DAte:2/8/2026
*/

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter the value";
    cin>> ch;

    if(isalpha(ch))
    {
        cout<<ch <<" is alphabet";
            }

    else if (isdigit(ch))
            {
    cout<<ch<<"the value is digit ";
            }

    else {
        cout<<ch<< " is special character";
    }

    return 0;
}