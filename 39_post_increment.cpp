/*
Program No:39
Program Title: Post increment
Concept: post increment, variable, input, output
Difficulty:EAsy
Written BY: Sudheer PAthak
DAte:24-07-2026
*/

#include<iostream>
using namespace std;

int main()

{
int  x,y;
   cout<<"put value =";
   cin>>x;
  y = x++; // y gets the original value (5), then x becomes 6

    cout << "x: " << x<<endl; // Outputs 6
    cout << "y: " << y; // Outputs 5

return 0;
}