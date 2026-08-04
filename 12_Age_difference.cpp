/* PRogram nO: 12
Title: Age difference
Content: Variable, Input, Output
Difficulty: Easy
Written By:sudheer pathak
Date:21-07-2026
*/

#include<iostream>
using namespace std;

int main()
{
    int age_father, age_son, Difference;

    cout<<"Enter the age of Father= ";
    cin>>age_father;
    cout<<"Enter the age of son= ";
    cin>>age_son;
    Difference=age_father - age_son;
    cout<<"Age difference is= "<<Difference;

    return 0;
}