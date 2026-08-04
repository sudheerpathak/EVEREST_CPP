/*
Project No:26
Project Title: Calculate BMI
Concept: Variable,Input, Output
Difficulty: Easy
Written BY: Sudheer Pathak
DAte_21-7-2026
*/

#include<iostream>
using namespace std;

int main()
{
    float BMI, Weight, Height;
    cout<<"Enter weight in kg=";
    cin>>Weight;
    cout<<"Enter Height in meter=";
    cin>>Height;

    BMI=Weight/(Height*Height);
    cout<<"The BMI is ="<<BMI;
    return 0;
}