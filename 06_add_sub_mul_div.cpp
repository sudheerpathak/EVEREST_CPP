#include<iostream>
using namespace std;
int main()
{
    int a,b, sum, sub, mul, div;
    cout<<"enter first no \n";
    cin>>a;
    cout<<"enter second no. \n";
    cin>>b;
    sum=a+b;
    
    cout<<"addition of two number= "<<sum ; 
    
    sub=a-b;
    cout<<"\n subtraction of two number= "<<sub;
   
    mul=a*b;
    cout<<"\n multiplication of two number= "<<mul;
    
    div=a/b;
    cout<<"\n divison of two number= "<<div;
    return 0;


}