/*
Program NO: 93
Program Title: find hcf of two number
Concept : while, if-else
Difficulty:Easy
Author : Sudheer Pathak
Date: 06-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int a, b, x;

    cout << "Enter the value for first : " << endl;
    cin >> a;

    cout << "Enter the value for second :" << endl;
    cin >> b;

   
    while (b != 0)
         {
            int temp = b;
            b = a % b;
            a = temp; 
         }

   cout << "HCF is :" << a << endl;

    
    return 0;
}