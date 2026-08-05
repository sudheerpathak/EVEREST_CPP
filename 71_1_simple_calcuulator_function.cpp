/*
Program No: 71_1
Program Title: simple calculator using function
Concept : Use of function
Difficulty: Easy
Author: Sudheer Pathak
Date: 5-8-2026
*/

#include <iostream>
using namespace std;

//function for addition

int add (int a , int b)
    {
    return a+b;
    }

//function for subtraction

int sub (int a, int b)
    {
    return a-b;
    }

//function for multiplication

int mul (int a, int b)
    {
        return a*b;
    }

//function for division

    float divi (float a, float b)
    {
        if(b==0)
        {
            cout << "DIvision not possible";
            return 0;
        }
     
        return a/b;
        
    }

int main()
{
    int num1, num2;

    cout<< "Program for simple calculator";

    cout << "Enter First number= ";
    cin >> num1;

    cout << "Enter Second number =";
    cin >> num2;
    
    cout << "\n ---------Result--------"<<endl;
    cout << add(num1 , num2) << " is addition of two number"<<endl;
    cout << sub(num1 , num2) << " is subtraction of two number"<<endl;
    cout << mul(num1 , num2) << " is multiplication of two number"<<endl;
    cout << divi(num1 , num2) << " is divison of two number"<<endl;

    return 0;
}

