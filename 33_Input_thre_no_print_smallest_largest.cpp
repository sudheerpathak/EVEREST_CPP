/*
Project No;33
Project Title: Input three number, print the largest and smallest number
Concept:Variable,input, output
Difficulty:EAsy
Written By:Sudheer Pathak
DAte:22-07-2026
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c ;
    cout<<"Enter first number=";
    cin>>a;
    cout<<"Enter second number =";
    cin>>b;
    cout<<"enter third number =";
    cin>>c;

    if(a>b)
    {
        if(b>c)
        {
        cout<<"the largest number is ="<<a<<endl;
        cout<<"the smallest number is ="<<c;
        
        }
    

        if(b<c)
        {
            if(a>c)
            {cout<<"the largest number is ="<<a<<endl;
             cout<<"the smallest number is ="<<b;
             
            }
            if(a<c)
            {
                cout<<"the largest number is="<<c<<endl;
                cout<<"the smalest number is="<<b;
                
            }
        } 
    }    

    if(b>a)
    {
        if(b>c)
        {
            if(a>c)
            {
                cout<<"the largest number is="<<b<<endl;
                cout<<"the smallest number is="<<c;
                
            }
            if(c>a)
            {
                cout<<"the largest number is="<<b<<endl;
                cout<<"the smallest number is="<<a;
                
            }

            
        }
    }

    if(b>c)
    {
        if(c>a)
        {
            if (b>a)
            {
                cout<<"the largest number is="<<b<<endl;
                cout<<"the smallest number is ="<<a;
                          
            }
        }   

        
    }

    if(b<c)
    {
        if (b>a)
        {
        cout<<"the largest number is ="<<c<<endl;
        cout<<"the smallest number is ="<<a;
        
        }
        if (a>b)
        {
            if(c>a)
            {
                cout<<"the largest number is="<<c<<endl;
                cout<<"the smallest number is="<<b;
                
    
            }
        }

    }
    if(a>c)
    {
        if(c>b)
        {
            cout<<"the largest number is ="<<a<<endl;
            cout<<"the smallest number is ="<<b;
            
        }
        if(a>b)
        {
            if(b>c)
            {
            cout<<"the largest number is="<<a<<endl;
            cout<<"the smallest number is ="<<c;  
            }
                   
        }
    }
    if(a<c)
    {
        if(a>b)
        {
            cout<<"the largest number is ="<<c<<endl;
            cout<<"the smallest number is ="<<b;
        }
        if (b>a)
        {
            if(c>b)
            {
            cout<<"the largest number is ="<<c<<endl;
            cout<<"ths smallest number is ="<<a;
            
            }
            if (c<b)
            {
                cout<<"the largest number is="<<b<<endl;
                cout<<"the smallest number is="<<a;
                
            }

        }


    }
        
       
    
    return 0;
}