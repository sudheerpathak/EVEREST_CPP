/*
Program No:72
Program Title: Grade Calculator (alternate-cleaner code)
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

    if (a<=0 || a>100)
    {
        cout << "Invalid value";
        return 0;
    }

    if (a>=90)
    {
        cout << "A";
    }
    else 
        {
            if (a>=80)
            {
                cout << "B";
            }  
            else 
            { 
                if (a>=70)
                {
                    cout << "C";
                }

                else
                {
                    if (a>=60)
                    {
                        cout << "D";
                    }
                    else{
                        cout << "Fail";
                    }
                }
                
            }   
        }   
        

 return 0;
}    