/*
Program No:74
Program Title: Atm withrawal validation
Concept: if else, switch, arithmetic operator
Difficulty: Easy
Author: Sudheer Pathak
Date: 05-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    
    int i,balance=10000, withdraw, category, password;  

    const int correct_pass=1009; // this program is for single person, whose password is predeclared.

    cout << "Enter the ATM card, and Press Enter"<<endl;

    cin.get(); // waits for user to press enter.

    cout << "Enter the Password"<<endl;

    cin >> password;

    bool success =false; //

    if (password == correct_pass)
    {

        
        cout << "Card is valid"<<endl;
        success = true;

        cout << "press 1 for balance checck" <<endl;     
        cout << "Press 2 for withdrwal"<<endl;
        cin >> category;

        switch (category)
        {
            case 1:
            {
                cout << "total balanace is = "<< balance <<endl;
                break;
            }
            case 2:
            {
                cout << "enter the value to withdraw"<<endl;
                cin >> withdraw;
                
                
                if(withdraw >0 && withdraw<=balance)
                {
                    balance=balance-withdraw;
                    cout << "balancee withdrawn is ="<<withdraw<<endl;
                    cout << "remaaining balanace =" <<balance << endl;
                }
                break;
            }
                 default:
                    {
                     cout<<"Invalid Choice";
                         break;
                    }   

        }


    }

    else 
    {
        cout << "Card is invalid, you have 3 attempts left";

       
        for ( i= 3 ; i >= 1 ; i--)
        {
            cout << "Enter password again";
            cin  >> password;
            if (password==correct_pass)
            {
            cout << "Access granted ! Weelcome"<<endl;
            success= true;
            

             cout << "press 1 for balance check"<<endl;
             cout << "Press 2 for withdrwal"<<endl;

             cin>> category;

             switch (category)
             {
                 case 1:
                {
                 cout << "total balanace is = "<< balance <<endl;
                    break;
               }
            
                 case 2:
                {
                 cout << "enter the value to withdraw"<<endl;
                    cin >> withdraw;
                
                     if(withdraw >0 && withdraw<= balance)
                    {
                        balance=balance-withdraw;
                        cout << "balancee withdrawn is ="<<withdraw<<endl;
                        cout << "remaaining balanace =" <<balance << endl;
                    
                    }
                 break; 
                    
                }

                default:
                    {
                     cout<<"Invalid Choice";
                        break;
                    }
            }
            break ;
            }
            else
            {
                if (i-1>0)
                {
                    cout << "Wrong Password" << (i-1) << "attempt(s) left"<<endl;
                }
            }
        }
        if (!success)
        {
            cout << "too many incorrect attempt, your card is blocked"<<endl;
            return 0;
        }
    }
return 0;
}