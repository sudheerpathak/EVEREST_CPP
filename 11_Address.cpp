/*
Program No :11 
Title: Address using varaiables
concept: Variable, Input, Output
Difficulty: Easy
Written By: Sudheer Pathak
Date: 21-07-2026
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string House_No, Building_Name, Locality, City, State, Country;
    int Pin;

    cout<<"Enter the House No"<<endl;
    getline(cin ,House_No);
    cout<<"Enter the Building_Name"<<endl;
    getline(cin, Building_Name);
    cout<<"Enter the Locality"<<endl;
    getline(cin, Locality);
    cout<<"enter the City"<<endl;
    getline(cin, City);
    cout<<"Enter the State"<<endl;
    getline(cin, State);
    cout<<"Enter the Country"<<endl;
    getline(cin, Country);
    cout<<"Enter the Pin"<<endl;
    cin>>Pin;

    cout<<" "<<House_No<<endl;
    cout<<" "<<Building_Name<<endl;
    cout<<" "<<Locality<<endl;
    cout<<" "<<City<<endl; 
    cout<<" "<<State<<endl; 
    cout<<" "<<Country<<endl; 
    cout<<" "<<Pin<<endl;

    return 0;
    
}

