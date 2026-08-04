/*
Project No:34
project Title:print ascii value of a character
concept: Variable, Input,Output
Difficulty: Easy
Written By: Sudheer Pathak
DAte:22-07-2026
*/
#include <iostream>
using namespace std;
int main()
{
    char x;
    cout<<"enter the character="<<x;
    cin>>x;
    cout<<"the ASCII value of"<<x<<"is"<<static_cast<int>(x);
    return 0;
}
