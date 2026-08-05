/*
Program No:72_2
Program Title: Grade Calculator (alternate-by switch case)
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

    if (a<0 || a>100)
    {
        cout << "Invalid value";
        return 0;
    }

    int cat= a/10;
    switch (cat)
    {
    case 10:
    case 9:
    {
        cout<< "A";
        break;
    }

     case 8:
    {
        cout<< "B";
        break;
    }
     case 7:
    {
        cout<< "C";
        break;
    }
     case 6:
    {
        cout<< "D";
        break;
    }
    default:
    {
        cout << "Fail";
        break;
    
    }

}

return 0;
}
