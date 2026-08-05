/*
Program NO: 75
Password Title: PAssword checker
concept: if else, switch case
Difficulty: easy
Author: sudheer pathak
Date: 05-8-2026
*/

#include <iostream>

using namespace std;

int main()
{
    int i, category;
    string  username =" " , password = " ", check_user, check_pass;
    char choice;

    do {

    cout << "Welcome to lolgin system"<< endl;
    cout << "press 1 for registration"<< endl;
    cout << "press 2 for login"<<endl;
    cin >> category;

    switch (category)
    {
        case 1:
        {
            cout << " enter new username"<< endl;
            cin >> username;

            cout << "enter new password" << endl;
            cin >> password;

            break;
        }

        case 2:
        {
            cout << "enter username "<< endl;
            cin >> check_user;

            cout << "enter password "<< endl;
            cin >> check_pass;

            if (check_user==username && check_pass== password)
            {
                cout << "Acess granted";
            }
            else 
            {
                cout << "invalid username and password";
            }
        
            break;
        }

       
        default:
        {
            cout << "invalid choices"<< endl;
        }
     

    }

    cout << "Do you want to continue ? (y/n):";
    cin >> choice;
}

while (choice =='y'|| choice =='Y');

return 0;

}