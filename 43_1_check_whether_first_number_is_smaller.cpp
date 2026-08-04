/*
Program No:43_1
Program Title: check wether first number is smaller
concept:Relational operator
Difficulty:Easiest
Written BY:Sudheer PAthak
DAte:25-07-2026
*/

#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter first value";
    cin>>a;

    cout<<"Enter second value";
    cin>>b;

    bool result=a<b; //Method 1
    cout<<result<<endl;

    cout<<(a<b); // Method 2 -it is alternate method
    return 0;
}