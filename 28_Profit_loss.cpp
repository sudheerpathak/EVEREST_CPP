/*
Project No: 28
Project Title: Profit and Loss
Concept: VAriable ,input Output
Difficulty:EAsy
Written By:Sudheer Pathak
Date:22=07-2026
*/
#include<iostream>
using namespace std;
int main()
{
    int cp,sp,p,l;
    cout<<"Enter the cost price of the product =";
    cin>>cp;
    cout<<"Enter the selling price of the product=";
    cin>>sp;

    if(sp>cp)
    { 
        p=sp-cp;
        cout<<"The profit is="<<p;
    }
    if(sp<cp)
    {
        l=cp-sp;
        cout<<"The Loss is="<<l;
    }
    return 0;
}