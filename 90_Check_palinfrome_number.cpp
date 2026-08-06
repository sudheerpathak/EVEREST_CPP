/*
Proogram No: 90
Program Title: Check Palindrome number
Concept: while, 
Difficulty: Easy
Author: Sudheer Pathak
Date: 06-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
int num,rev=0,n,remainder;

cout << " Enter the number :";
cin >> num;
n=num;
while (n!=0)
{
    remainder = n%10;
    rev = (rev * 10) + remainder;
    n=n/10;
}
cout << "the number is :" << rev << endl;

if (rev==num)
{
    cout << "The number is palindrome ";
}

else 
{
    cout << "the number is not palindrome";
}
    return 0;
}