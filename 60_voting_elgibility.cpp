/*
Program No:60
Program Title: Voting Eligiblity
Difficulty:Easy
Concept:if-else
Author:Sudheer Pathak
Date:26-07-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int age;
    cout << " Check voting eligibility \n";
    cout << "Enter age = ";
    cin >> age;

    if(age>18)
    {cout << "Eligible for vote";}

    else {cout << "Not elgible for vote";}
    
    return 0;
}

