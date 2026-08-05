/*
Program No: 80_1
Program Title: Largest among the four number
Concept: if -else, conditionality check
Difficulty: Easy
Author: sudheer pathak
Date: 05-08-2026
*/

#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, largest;

    cout << "Enter The first number";
    cin >> a;

    cout << "Enter The second number";
    cin >> b;

    cout << "Enter The third number";
    cin >> c;

    cout << "Enter The fourth number";
    cin >> d;

    largest =a; // let us assume that the largest number is 'a'.

    if ( b > largest)
    {
        largest =b;
       
    }
  
    if ( c > largest)
    {
        largest =c;
        
    }

    if ( d > largest)
    {
        largest =d;
        
    }
    
        cout << "the largest number is:"<<largest<<endl;
    
return 0;
}