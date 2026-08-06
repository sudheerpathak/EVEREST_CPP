/*
Program No: 90 (Alternative)
Program Title: Check Palindrome number using Strings
Concept: String manipulation, Two-pointer approach
Difficulty: Easy
Author: Sudheer Pathak
Date: 06-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
string str;

cout << "Enter the number ir word" << endl;

cin >> str;

bool ispalindrome = true;

int start = 0;

int end = str.length() -1;

//compare character at both end  moving inward

while (start < end)

{
    if(str[start] != str[end])

    {
        ispalindrome = false;
        
        break; // stop immediately if mismatch is found.
    
    }

    start ++ ;

    end -- ;
}

if (ispalindrome)
{

    cout << "The input is palindrome" << endl;
}    

else 
{

 cout << "The input is not palindrome" << endl;

}
   
return 0;
}