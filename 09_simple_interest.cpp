#include<iostream>
using namespace std;
int main()
{
    int p, r, t, SI;
    cout<<"Program -Simple Interest";

    cout<<"\n put the value of Principal=";
    cin>>p;
    cout<<"put the vale of rate=";
    cin>>r;
    cout<<"put the value of time=";
    cin>>t;
    SI=p*r*t/100;
    cout<< "The simple interest is"<<SI;
    return 0;


}