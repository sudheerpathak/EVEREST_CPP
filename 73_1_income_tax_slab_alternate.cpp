/*
Program No:73_1
Program Title: Calculate income tax slab through if-else
COncept- either if else, 
Difficulty:EASy
Author: sudheerr pathak
Date: 05-08-2026
*/

#include <IOstream>

using namespace std;

int main ()
{
    int salary;

    cout << "Enter salary";
    cin >> salary;

    if(salary < 0)
    {
        cout << "invalid attempt";
        return 0;
    }

    if (salary < 400000 && salary >0)
    {
        cout << "not tax rate";
    }
    
    else if (salary >400001 && salary < 800000)
    {
        cout << " 5 %";
    }

    else if (salary > 800001 && salary < 1200000)
    {
        cout << "10 %";
    }

    else if (salary > 1200001 && salary < 1600000)
    {
        cout << "15 %";
    }

    else if (salary >1600001 && salary < 2000000)
    {
        cout << "20 %";
    }

    else if (salary > 2000001 && salary < 2400001)
    {
        cout << "25 %";
    }

    else 
    {
        cout << " 30 %";
    }

    return 0;

}