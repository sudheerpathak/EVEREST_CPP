/*
Program No:72
Program Title: Grade Calculator
Concept: ANd, or logical operator
Difficulty: Easy
Author: SUdheer Pathak
Date:05-08-2026
*/

#include <iostream>

using namespace std;

int main()
{
    float a;
    cout << "Program for grade calculator"<<endl;

    //Ask for grade
    
    cout << "Enter grades";
    cin >> a;

    if (a >=90 && a <= 100)
    {
        cout << "A";
    }

    else if (a >=80 && a<= 89)
    {
        cout << "B";
    }

    else if (a >= 70  && a<= 79)
    {
        cout << "C";
    }

    else if (a >= 60 && a<= 69)
    {
        cout << "D";
    }

   else if(a<60)
    {
        cout << "Fail";
    }

    else {
        cout << "invalid value";
    }

}