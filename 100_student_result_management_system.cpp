/*
Program No: 100
Program Title: student result management system
Concept:
Difficulty: easy
Author : Sudheer pathak
Date : 06-08-2026
*/

#include <iostream>

using namespace std;

int main()
{
    string name;
    int roll_no, sub1, sub2, sub3, sub4, sub5;
    int total, grade;
    float percentage;

    cout << "Enter student name : ";
    cin >> name; 

    cout << "Enter Roll no : ";
    cin >> roll_no;

    cout << "Enter marks for Physics : ";
    cin >> sub1;

    cout << "Enter marks for Chemistry : ";
    cin >> sub2;

    cout << "Enter marks for Maths : ";
    cin >> sub3;

    cout << "Enter marks for English : ";
    cin >> sub4;

    cout << "Enter marks for Computer : ";
    cin >> sub5;

total = sub1 + sub2 + sub3 + sub4 + sub5;
cout << "Total marks obtained is : " << total << " / 500"<< endl;

percentage = (total * 100)/500;
cout << "Percentage obtained is : " << percentage << "%"<< endl;

if (percentage > 90 && percentage <100)
{
    cout << "Grade : A 'excellent'" ;
}

else if (percentage > 80 && percentage <89)
{
    cout << "Grade : B 'Good / AAbove average'" ;
}

else if (percentage > 70 && percentage <79)
{
    cout << "Grade : C 'Average'" ;
}

else if (percentage > 60 && percentage <69)
{
    cout << "Grade : D 'Below Average '" ;
}

else 
{
    cout << "Grade : F 'Fail'" ;
}

if (percentage >60)
{
    cout << "The student has passed the exam";
}

else
{
    cout << "The student has failed the exam";

}

return 0;
}