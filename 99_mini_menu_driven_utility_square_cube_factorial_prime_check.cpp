/*
Program No: 99
Program Title: mini menu driven utility (square, cube , factorial, prime check.)
Concept: switch case, if else, while, for
Difficulty: easy
Author: sudheer Pathak
Date -06-8-2026
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, i, square, cube, factorial =1, prime, category;

    bool isPrime = true;

    cout << "press 1 for square "<< endl;
    cout << "Press 2 for cube" <<endl;
    cout << "press 3 for factorial" << endl;
    cout << "Press 4 for factorial" <<endl;
    cout << "Chose any option between (1-4)" << endl;
    cin >> category;

    cout << "Enter a number";
    cin >> a;



    switch(category)
    {
        case 1:
        {
            square = a * a;
            cout << "sqaure is: " << square << endl;
            break;
        }

        case 2:
        {
            cube = a * a * a;
            cout << "cube is: " << cube << endl;
            break;
        }

        case 3:
        {
            for (i = 1; i <= a; i++)
            {
                factorial = factorial * i;
            }
            cout << "Factorial is: " << factorial << endl;
            break;
        }

        case 4:
        {
            if (a <= 1)
            {
                cout << "entered number is invalid";
                return 0;
            }

            else
            {
               for(b = 2; b <= a/2; b++)
                {
                    if (a % b == 0)
                    {
                        isPrime = false;
                        break;
                        
                    }
                    
                }
                if (isPrime)
                {
                    cout << a << " is a prime number." << endl;
                }
                else
                {
                    cout << a << " is not a prime number." << endl;
                }
            }
            break;
        }

        default :
        {
            cout << "Invalid choice" << endl;
        }
    }

return 0;

}


