/*
Program No:73
Program Title: Calculate income tax slab
COncept- either if else, or switch case, here i will use switch case to increase difficulty
Difficulty:EASy
Author: sudheerr pathak
Date: 05-08-2026
*/

#include <IOstream>

using namespace std;

int main ()
{
    int a;

    cout << "program for calulating income tax slab";

    cin >>a; //enter the value

    if (a<0)
    {
        cout <<"invalid salary";
        return 0;
    }

    int category=a/400000;

    switch (category)
    {
    case 0:
    {
        cout << "No tax";
        break;
    }
    case 1:
    {
        cout << "5%";
        break;
    }

    
    case 2:
    {
        cout << "10%";
        break;
    }

    case 3:
        {
        cout << "15%";
        break;
    }

       case 4:
    {
        cout << "20%";
        break;
    }

   
    case 5:
    {
        cout << "25%";
        break;
    }

    default:
    {
        cout <<"30%";
        break;
    }

    }
    
return 0;


}