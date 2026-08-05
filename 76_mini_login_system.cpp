/*
Program NO: 76
Program Title_ mini login system
Concept: do while loop, switchcase,
Difficulty: easy
Author: sudheer pathak
Date: 05-08-2026
*/

#include <iostream>

using namespace std;

int main ()

{

    int category;
    char choice;
    string username ="" , password = "", check_user, check_pass;

    do
    {
        cout << "Proogram for mini login system";
        
        cout << "Press 1 for registration"<< endl;

        cout << "Press 2 for login "<< endl;

        cout << "press 3 for exit" << endl;

        cin >> category;

        switch (category)
        {
            case 1:
            {
                cout << "enter username to save"<<endl;
                cin >> username;

                cout << "enter password to save" <<endl;
                cin >> password;

                break;
            }

            case 2:
            {
                cout << "enter username to login"<<endl;
                cin >> check_user;

                cout << "enter password to login "<< endl;
                cin >> check_pass;

                if (username==check_user && password == check_pass)
                {
                    cout << "ACess granted"<< endl;
                    
                }
                else 
                {
                    cout << "Invalid login" << endl;
                }

                break;
            }

            case 3:
            {
                cout << "press a key to exit"<< endl;
                return 0; 
            }

            default:
            {
                cout << "invalid username and pasword"<< endl;
            }
        }

    cout << "Do you want to continue (y/n)? "<< endl;
    cin >> choice;

    } 

    while (choice=='y' || choice == 'Y');
    
return 0;
}