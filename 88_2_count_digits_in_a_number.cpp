/*
Program No: 88_1
Program Title : Count digits in a number faster method by using log
Concept: if else, whhile
Difficulty: easy
Author: Sudheer pathak
Date:06-08-2026
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()

{
    long long n;

    cout << "The program is to count the number of digits in the number\n";
    cout << "Enter the digits :";
    cin >> n;

    string numStr = to_string (abs(n));
    int count = numStr.length ();

    cout << "The number of digits is:"<< count <<endl;

 return 0;

}