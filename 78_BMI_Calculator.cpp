/*
Program No:78
Program Title: BMI calculator
Concept: simple
Difficulty:EAsy
Author: Sudheer PAthak
Date:05-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    float weight_kg, height_m, weight_lbs, height_in, BMI;
    int category;

    cout << "Program to calculate BMI Index"<<endl;
    cout << "Press 1 to enter details in kg and m"<< endl;
    cout << "Press 2 to enter details in lbs and in" <<endl;
    
    cin >>category;

    switch (category)
    {
        case 1:
        {
            cout << "enter detail in kg and m"<<endl;

            cout <<"enter weight in kg"<< endl;
            cin >>weight_kg;

           
            cout <<"enter height in m"<< endl;
            cin >>height_m;

            BMI = weight_kg / (height_m * height_m);
            cout << "BMI index is:" <<BMI<<endl;

            if(BMI < 18.5)
    cout << "Underweight";

else if(BMI < 25)
    cout << "Normal";

else if(BMI < 30)
    cout << "Overweight";

else
    cout << "Obese";
    
            break;

        }

        case 2:
        {
            cout << "enter detail in lbs and in"<<endl;

            cout <<"enter weight in lbs"<< endl;
            cin >>weight_lbs;

           
            cout <<"enter height in in"<< endl;
            cin >>height_in;

            BMI =(703* weight_lbs) / (height_in * height_in);
            cout << "BMI index is:" <<BMI<<endl;

            if(BMI < 18.5)
    cout << "Underweight";

else if(BMI < 25)
    cout << "Normal";

else if(BMI < 30)
    cout << "Overweight";

else
    cout << "Obese";
            break;

        }

        default :
        {
            cout << "Invalid details";
        }

    }

return 0;

}