/*
Program No:97
Program Title : Strong number check
Concept: 
Difficulty:Easy
Author: sudheer pathak
Date:06-08-2026
*/

#include<iostream>

using namespace std;

int main()
{
    int n, temp, a, x=0, i;

    cout << "Enter a number";

    cin >> n;

if (n<1)
{
    cout << "enterd number is invalid";
    return 0;
}

else{

    temp=n;
    while (temp !=0)
    {
        a = temp % 10;

        int z=1;
       for (i = 1; i<= a; i++)
          {
            z = z * i;
          }
       x = x +z;
      
       temp = temp / 10;
        
    }
   if (n == x)
        {
            cout << n << " is a Strong number." << endl;
        }
        else
        {
            cout << n << " is not a Strong number." << endl;
        }
    }

return 0;
}