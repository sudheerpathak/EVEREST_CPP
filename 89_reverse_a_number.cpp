/*
Program No:89
Programe Title: Reverse a number
concept: while, if else
Difficulty: EAsy
Author: sudheer pathak
Date: 05-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int n, remainder, rev=0;

    cout << "Program to check reverse of a number \n";

    cout << "Enter a number : ";

    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;
        rev = (rev * 10) + remainder;
        n = n / 10;
       
    }
     cout << "reversed number is :"<<rev <<endl;
    return 0;

}