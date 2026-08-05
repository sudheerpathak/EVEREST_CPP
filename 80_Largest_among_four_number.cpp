/*
Program NO: 80
Program Title: Largest among four number
concept: If -else
Difficulty: Easy
Author:Sudheer pathak
Date:05-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    cout << "Program to check the largest of four number \n";

    int a, b, c, d;

    cout << "Enter FIrst number";
    cin >> a;

    cout << "Enter Second number";
    cin >>b;

    cout << "Enter Third number";
    cin >> c;

    cout << "Enter fourth number";
    cin >> d;

    if(a>b && a>c && a>d)
    {
        cout <<"\n"<< a <<" is the largest number";
    }

   else if(b>a && b>c && b>d)
    {
        cout <<"\n"<< b <<" is the largest number";
    }

    else if(c>a && c>b && c>d)
    {
        cout <<"\n"<< c <<" is the largest number";
    }

   else
       {
        cout <<"\n"<< d <<" is the largest number";
    }
    
    return 0;


}