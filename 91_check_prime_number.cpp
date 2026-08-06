/*
Program no:91
Program title : check prime number
Concept: And logic, if else
Difficulty: Easy
Author: sudheer pathak
Date: 06-08-2026
*/

#include<iostream>

using namespace std;

int main()

{
    int i, n;
    
    bool isPrime = true;

    cout << "Enter the number to check it whether it is prime or not" << endl;

    cin >> n;

    //HAndle edges cases: 0, 1 and negative numbers are not prime
    if (n < 1)
    {
        isPrime = false;
    }
    
    else
    {
        for (i = 2; i <= n/2; i++) // check for n/2 or sqrt of n for efficiency
        {
            if (n % i ==0)    
            {
                isPrime = false; //found a factor so it is not a prime
                break;           // Exit THE LOOP IMMEDIATELY

            }
        }
    }

    // Output the final result based on flag

    if (isPrime)
    {
        cout << " THe number is prime"<<endl;
    }

    else
    {
        cout <<"The number is not prime" <<endl;
    }    
      

return 0;
}
