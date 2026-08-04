/*
Program NO:49_1
Program Title : Calculate average of 10 consecutive number by the help of for loop
Concept: for loop
difficulty : EAsy
Written By: SUdheer Pathak
Date: 25-07-2026
*/

#include<iostream>
using namespace std;

int main()

{
    int i, a, b, total =0; 
    float average ;

    cout<<"Enter the first value";
    cin >> b;

    cout<<"Enter the number of times loop will run =";
    cin >> a;


    for (i=0; i<a; i++)
    {
        total=total + b;
        
        cout<<"Iteration ="<<i+1 <<"  Current b value    ="<<b << " Running total value    ="<<total<< endl;
    b=b+2;
    }

    average= total/a;

    cout<<"  The average is ="<<average;

    return 0;


}