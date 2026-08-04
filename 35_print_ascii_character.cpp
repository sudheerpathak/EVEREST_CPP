/*
Project No-35
Project Title-Print the character and ASCII
Concept: VAriable, INput, OUtput, ASCII
Difficulty: EAsy
Written BY: Sudheer pATHAK
Date: 222-07-2026
*/
#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Input a character";
    cin>>x;
    cout<<"the character is"<<x<<endl;
    cout<<"The ASCII is"<<static_cast<int>(x);
    return 0;
    
}