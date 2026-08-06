/*
Program NO: 96_2
Program Title: Armstrong number check  for n digit number
Concept: If-else, while
Difficulty: Easy
Author: sudheer Pathak
Date: 06-08-2026
*/

#include <iostream>
#include <cmath>

using namespace std;

int main ()

{

int n, a, temp;
long long x = 0;
int count = 0;

cout << "Enter the number:";
cin >>n;

if (n<1)
{
    cout << "Enter valid number";
    return 0;
}

else 
{
    temp = n;
    while(temp !=0)
    {
        count++;
        temp = temp /10;
    }

    temp =n;

    while (temp != 0)
    {
        a = temp % 10;
        x = x + round(pow(a, count));
        temp = temp /10;

    }
    if (n == x)
    {
        cout << n <<" is armstrong number" << endl;
    }
    else
    {
        cout << n << "is not an armstrong number" << endl;
    }
}

return 0;
}