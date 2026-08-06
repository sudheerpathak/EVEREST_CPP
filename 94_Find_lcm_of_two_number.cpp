/*
Program NO: 94
Program Title : Find lcm of two number
concept : While. if else
Difficulty: Easy
Author : Sudheer Pathak
Date : 06-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int num1, num2, a, b, temp, lcm;

    cout << "Enter the value of First number:" << endl;
    cin >> num1;
    a = num1;

    cout << "Enter the value of second number:" << endl;
    cin >> num2;
    b = num2; 

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    lcm = (num1*num2) / a;

    cout<< "Lcm is :" <<lcm ;

    return 0;

}