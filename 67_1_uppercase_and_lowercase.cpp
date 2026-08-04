/*
Program No:67_1 (Method-2)
Program Title: uppercase and lowercase (Method-2)
Concept: isupper, islower
Difficulty: Easy
Author-Sudheer PAthak
Date:2/8/2026
*/

#include <iostream>

using namespace std;

int main()
{
char ch;

cout<<"Enter a character";
cin>>ch;

if(isupper(ch))
{
    cout<< ch << " is uppercase";
}

else if (islower(ch))
{
    cout<<ch << "is lowercase";
}

else
{
    cout<<"The value is not alphabetic in nature";
}

return 0;

}