/*
Program No: 70
Program TItle: smalllest of three number
Cocept: and, if else, 
Difficulty: EAsy
Author: Sudheer Pathak
Date: 5-8-2026
*/

#include<iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter First NUmber = ";
    cin >> a;

    cout << "Enter second number = ";
    cin >> b;

    cout << "ENter third number =" ;
    cin >> c;

    // aAssume 'a' is smallest initially
    int smallest = a;

    // compare with b

    if (b < smallest)
    {
        smallest = b;
    }

    //campare with c

    if (c < smallest)
    {
        smallest = c;
    }

    cout << smallest << " is the smallest number "<<endl;

    return 0;

}
