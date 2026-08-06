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

using namespace std;

int main()

{
    long long n;

    int count = 0;

    cout << "The program is to count the number of digits in the number\n";
    cout << "Enter the digits :";
    cin >> n;

    count = (n==0) ? 1 : log10(abs(n)) + 1;

    cout << "Number of digits "<< count << endl;
    return 0;
}