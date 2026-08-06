/*
Program NO: 98
Proogram Title: Simple number guessing game
Concept: if else, while loop, break
Difficulty: Easy
Author: sudheer pathak
Date : 06-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int n , secret = 25;


    cout<< "This is a secret game, kindly guess the number" << endl;
    

   
   do 
    {
        cout << "Enter a number";
        cin >> n;

        if (n == -1)
        {
            cout << "You chose to exit the game. Goodbye!" << endl;
            break; // Immediately exits the do-while loop
        }

        if (n > secret)
        {
            cout << "number is too high" << endl;
        }

        else if ( n < secret )
         {
            cout << "number is too low "<< endl;
         }

         else 
         {
            cout << "U have guessed correct number, you have won this game" << endl;
         }
    }
    while (n!= secret);

return 0;
}