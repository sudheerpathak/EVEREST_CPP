/*
Program No: 87
Program Title:multiplication table of a number
Concept : for loop
Difficulty: Easy
Author: sudheer Pathak
Date : 06-08-2026
*/

#include<iostream>

using namespace std;

int main()

{
int i, n, mul;

cout << "This program is for multiplication table of a number \n";

cout << "Enter the value of N:";

cin >> n;

if(n<1)
{
    cout << "Enter a positive valid number";
    return 0;
}

for (i=1;i<=10;i++)
{
    mul= n*i;
    cout << n << " " << "*" << " " << i << " " << "=" << " "<< mul << endl;
}

return 0;
}
