/*
Program No: 67
Program Title: Uppercase or lowercase
Concept: Uppecase or Lowercase
Difficulty: EASy
Author: Sudheer Pathak
DAte: 29-07-2026
*/

#include<iostream>

using namespace std;

int main()

{
    char ch;
    cout<< "Enter the value";
    cin>>ch;

    if (ch>='A' && ch<='Z')
    {
        cout<<ch<<" is uppercase";
    }

    else if (ch>='a' && ch <= 'z')
    {
        cout<<ch<<" is lowercase";
    }

    else
    {
        cout<<"The character is not alphabatic in character";
    }

    return 0;    

}