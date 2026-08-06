/*
Program No: 92
Program Title: Print all prime numbers between 1 and N
Concept: bool, if else, for, while
Difficulty : Easy
Author : Sudheer Pathak
Date: 06-08-2026
*/

#include<iostream>

using namespace std;

int main()

{

    int i, n, num;

    bool isPrime = true;

    cout << "Enter the value";

    cin >> n;


    // check for edge cases where no prime exist

    if(n < 2)
    {
        cout << "There are no prime number in this range" << endl;
        return 0;        
    }

    cout << "Prime numbers betweeen 1 and " << n << " are :" << endl;

    for(num = 2; num <= n ; num++)
        {
            bool isPrime = true;

            for (i = 2; i <= num / 2; i++)
            {
                if (num % i ==0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                cout << num << " ";
            }
            
        }

    cout << endl;      
    return 0;
}