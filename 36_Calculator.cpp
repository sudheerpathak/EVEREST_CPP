/*
Program No:36
Program Title: Calculator
Concept: Arithmetic OPerator
Difficulty:EAsy
Written bY: Sudheer Pathak
Date:24-07-2026
*/
#include <iostream>
using namespace std;

int main()
{
int a,b;
int choice;

cout<<"Enter the First Number= ";
cin>>a;
cout<<"Enter the second NUmber= ";
cin>>b;

cout<<"type 1 for addition\n";
cout<<"type 2 for subtraction \n";
cout<<"type 3 for multiplication\n";
cout<<"type 4 for division\n";
cout<<"type 5 for reminder\n";



cin>>choice;
if (choice==1)
{   
    int sum=a+b;
    cout<<"The sum of two number is="<<sum;
}

 else if(choice==2)
{
    int diff = a - b ;
    cout<< " The difference of both the number is ="<<diff;
}

else if(choice==3)
{
   int mul=a*b;
    cout<<"the multiplication of both the number is ="<<mul;
}


else if(choice==4)
{ 
    if(b!=0)
    {
    int quo=a/b;
    cout<<"The divison of two numbere is="<<quo;
     
    }
    else 
    {
          cout<<"Division not possible";
    }
    
       
}

else if(choice==5)
{
    if (b!=0)
    {
    int rem=a%b;
    cout<<"The reminder of two number is ="<<rem;
        
    }

    else
    {
        cout<<"Calculation not possible";
    
    }
   
}

else
{
    cout<<"Invalid choice run thee program again";
}
return 0;
}



