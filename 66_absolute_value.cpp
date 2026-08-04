/*
Program No: 67
Program Title: Absolute value
Concept: If -else, comparison, unary minus
Difficulty: EAsy
AUthor:Sudheer Pathak
Date:26-07-2026
*/

#include <iostream>
#include <cmath>


using namespace std;

int main()

{
    int a;
    cout << "Enter the value";
    cin >> a;

    if (a<0)
    {
        a = abs(a);
        cout << "the absolute value is =" << a;
    }

    else if(a>0)
    {
        cout << "The absolute value is = "<<a;
    }

    else 
    { 
        cout << "The absolute value is 0 ";
    }

    return 0;
}